#include <glog/logging.h>
#include <google/protobuf/text_format.h>
#include <lmdb.h>
#include <stdint.h>
#include <sys/stat.h>
#include <fstream>
#include <string>
#include "caffeine/proto/caffe.pb.h"

using namespace caffe;
using namespace std;

string data_path = "data/cifar-10/";

int main(int argc, char** argv){
    google::InitGoogleLogging(argv[0]);

    // lmdb
    MDB_env *mdb_env;
    MDB_dbi mdb_dbi;
    MDB_val mdb_key, mdb_data;
    MDB_txn *mdb_txn;
    
    string db_path = data_path + string("cifar-10-train-lmdb");

    LOG(INFO) << "Opening lmdb " << db_path;
    CHECK_EQ(mkdir(db_path.c_str(), 0744), 0)  << "mkdir " << db_path << "failed";
    CHECK_EQ(mdb_env_create(&mdb_env), MDB_SUCCESS) << "mdb_env_create failed";
    CHECK_EQ(mdb_env_set_mapsize(mdb_env, 1099511627776), MDB_SUCCESS) << "mdb_env_set_mapsize failed";
    CHECK_EQ(mdb_env_open(mdb_env, db_path.c_str(), 0, 0664), MDB_SUCCESS)<< "mdb_env_open failed";
    CHECK_EQ(mdb_txn_begin(mdb_env, NULL, 0, &mdb_txn), MDB_SUCCESS)<< "mdb_txn_begin failed";
    CHECK_EQ(mdb_open(mdb_txn, NULL, 0, &mdb_dbi), MDB_SUCCESS)<< "mdb_open failed. Does the lmdb already exist? ";
    //CHECK_EQ(mdb_cursor_open(mdb_txn, mdb_dbi, &mdb_cursor), MDB_SUCCESS) << "mdb_cursor_open failed";
    //CHECK_EQ(mdb_cursor_get(mdb_cursor, &mdb_key, &mdb_value, MDB_FIRST), MDB_SUCCESS) << "mdb_cursor_get failed";
    /*dbsize*/
    // Storing to db
    char label;
    const int kMaxKeyLength = 10;
    char key_cstr[kMaxKeyLength];
    string value;
    int channels = 3;
    int width    = 32;
    int height   = 32;
    int image_pixes_size = channels * width * height;

    unsigned char* pixels = (unsigned char*) malloc(image_pixes_size);

    Datum datum;
    datum.set_channels(3);
    datum.set_height(height);
    datum.set_width(width);
    string filename = data_path + "data_batch_";
    for(int i = 1; i <= 5; i++){
        char str[10];
        sprintf(str, "%d", i);
        string name = filename + string(str) + ".bin";
        ifstream file(name.c_str(), ios::binary);
        int number_of_images = 10000;
        if(file.is_open()){
            for(int j = 0; j < number_of_images; j++){
                file.read(&label, sizeof(char));
                file.read((char*)pixels, sizeof(char) * width * height * channels);
                datum.set_data(pixels, sizeof(char) * width * height * channels);
                datum.set_label(label);
                int item_id = (i - 1) * number_of_images + j;
                snprintf(key_cstr, kMaxKeyLength, "%08d", item_id);

                /*to serialize*/
                datum.SerializeToString(&value);
                string keystr(key_cstr);

                /*write db*/
                mdb_data.mv_size = value.size();
                mdb_data.mv_data = reinterpret_cast<void*>(&value[0]);
                mdb_key.mv_size = keystr.size();
                mdb_key.mv_data = reinterpret_cast<void*>(&keystr[0]);
                CHECK_EQ(mdb_put(mdb_txn, mdb_dbi, &mdb_key, &mdb_data, 0), MDB_SUCCESS)<< "mdb_put failed";
            }
        }
    }

    CHECK_EQ(mdb_txn_commit(mdb_txn), MDB_SUCCESS) << "mdb_txn_commit failed";
    mdb_close(mdb_env, mdb_dbi);
    mdb_env_close(mdb_env);

    db_path = data_path + "cifar-10-test-lmdb";
    LOG(INFO) << "Opening lmdb " << db_path;
    CHECK_EQ(mkdir(db_path.c_str(), 0744), 0)  << "mkdir " << db_path << "failed";
    CHECK_EQ(mdb_env_create(&mdb_env), MDB_SUCCESS) << "mdb_env_create failed";
    CHECK_EQ(mdb_env_set_mapsize(mdb_env, 1099511627776), MDB_SUCCESS) << "mdb_env_set_mapsize failed";
    CHECK_EQ(mdb_env_open(mdb_env, db_path.c_str(), 0, 0664), MDB_SUCCESS)<< "mdb_env_open failed";
    CHECK_EQ(mdb_txn_begin(mdb_env, NULL, 0, &mdb_txn), MDB_SUCCESS)<< "mdb_txn_begin failed";
    CHECK_EQ(mdb_open(mdb_txn, NULL, 0, &mdb_dbi), MDB_SUCCESS)<< "mdb_open failed. Does the lmdb already exist? ";

    filename = data_path + "test_batch.bin";
    ifstream file(filename.c_str(), ios::binary);
    if(file.is_open()){
        for(int item_id = 0; item_id < 10000; item_id++){
            file.read(&label, sizeof(char));
            file.read((char*)pixels, sizeof(char) * width * height * channels);
            datum.set_data(pixels, sizeof(char) * width * height * channels);
            datum.set_label(static_cast<int>(label));
            snprintf(key_cstr, kMaxKeyLength, "%08d", item_id);

            /*to serialize*/
            datum.SerializeToString(&value);
            string keystr(key_cstr);

            /*write db*/
            mdb_data.mv_size = value.size();
            mdb_data.mv_data = reinterpret_cast<void*>(&value[0]);
            mdb_key.mv_size = keystr.size();
            mdb_key.mv_data = reinterpret_cast<void*>(&keystr[0]);
            CHECK_EQ(mdb_put(mdb_txn, mdb_dbi, &mdb_key, &mdb_data, 0), MDB_SUCCESS)<< "mdb_put failed";
        }
    }

    CHECK_EQ(mdb_txn_commit(mdb_txn), MDB_SUCCESS) << "mdb_txn_commit failed";
    mdb_close(mdb_env, mdb_dbi);
    mdb_env_close(mdb_env);
    return 0;
}


