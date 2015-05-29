// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: caffe.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "caffe.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace caffe {

namespace {

const ::google::protobuf::Descriptor* BlobProto_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BlobProto_reflection_ = NULL;
const ::google::protobuf::Descriptor* Datum_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Datum_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_caffe_2eproto() {
  protobuf_AddDesc_caffe_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "caffe.proto");
  GOOGLE_CHECK(file != NULL);
  BlobProto_descriptor_ = file->message_type(0);
  static const int BlobProto_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlobProto, num_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlobProto, channels_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlobProto, height_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlobProto, width_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlobProto, data_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlobProto, diff_),
  };
  BlobProto_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BlobProto_descriptor_,
      BlobProto::default_instance_,
      BlobProto_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlobProto, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlobProto, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BlobProto));
  Datum_descriptor_ = file->message_type(1);
  static const int Datum_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Datum, channels_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Datum, height_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Datum, width_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Datum, data_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Datum, label_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Datum, float_data_),
  };
  Datum_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Datum_descriptor_,
      Datum::default_instance_,
      Datum_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Datum, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Datum, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Datum));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_caffe_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BlobProto_descriptor_, &BlobProto::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Datum_descriptor_, &Datum::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_caffe_2eproto() {
  delete BlobProto::default_instance_;
  delete BlobProto_reflection_;
  delete Datum::default_instance_;
  delete Datum_reflection_;
}

void protobuf_AddDesc_caffe_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013caffe.proto\022\005caffe\"y\n\tBlobProto\022\016\n\003num"
    "\030\001 \001(\005:\0010\022\023\n\010channels\030\002 \001(\005:\0010\022\021\n\006height"
    "\030\003 \001(\005:\0010\022\020\n\005width\030\004 \001(\005:\0010\022\020\n\004data\030\005 \003("
    "\002B\002\020\001\022\020\n\004diff\030\006 \003(\002B\002\020\001\"i\n\005Datum\022\020\n\010chan"
    "nels\030\001 \001(\005\022\016\n\006height\030\002 \001(\005\022\r\n\005width\030\003 \001("
    "\005\022\014\n\004data\030\004 \001(\014\022\r\n\005label\030\005 \001(\005\022\022\n\nfloat_"
    "data\030\006 \003(\002", 250);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "caffe.proto", &protobuf_RegisterTypes);
  BlobProto::default_instance_ = new BlobProto();
  Datum::default_instance_ = new Datum();
  BlobProto::default_instance_->InitAsDefaultInstance();
  Datum::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_caffe_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_caffe_2eproto {
  StaticDescriptorInitializer_caffe_2eproto() {
    protobuf_AddDesc_caffe_2eproto();
  }
} static_descriptor_initializer_caffe_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int BlobProto::kNumFieldNumber;
const int BlobProto::kChannelsFieldNumber;
const int BlobProto::kHeightFieldNumber;
const int BlobProto::kWidthFieldNumber;
const int BlobProto::kDataFieldNumber;
const int BlobProto::kDiffFieldNumber;
#endif  // !_MSC_VER

BlobProto::BlobProto()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BlobProto::InitAsDefaultInstance() {
}

BlobProto::BlobProto(const BlobProto& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BlobProto::SharedCtor() {
  _cached_size_ = 0;
  num_ = 0;
  channels_ = 0;
  height_ = 0;
  width_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BlobProto::~BlobProto() {
  SharedDtor();
}

void BlobProto::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BlobProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BlobProto::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BlobProto_descriptor_;
}

const BlobProto& BlobProto::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_caffe_2eproto();
  return *default_instance_;
}

BlobProto* BlobProto::default_instance_ = NULL;

BlobProto* BlobProto::New() const {
  return new BlobProto;
}

void BlobProto::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    num_ = 0;
    channels_ = 0;
    height_ = 0;
    width_ = 0;
  }
  data_.Clear();
  diff_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BlobProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 num = 1 [default = 0];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &num_)));
          set_has_num();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_channels;
        break;
      }

      // optional int32 channels = 2 [default = 0];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_channels:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &channels_)));
          set_has_channels();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_height;
        break;
      }

      // optional int32 height = 3 [default = 0];
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_height:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &height_)));
          set_has_height();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_width;
        break;
      }

      // optional int32 width = 4 [default = 0];
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_width:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &width_)));
          set_has_width();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_data;
        break;
      }

      // repeated float data = 5 [packed = true];
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_data:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_data())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_FIXED32) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 42, input, this->mutable_data())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_diff;
        break;
      }

      // repeated float diff = 6 [packed = true];
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_diff:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_diff())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_FIXED32) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 50, input, this->mutable_diff())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void BlobProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 num = 1 [default = 0];
  if (has_num()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->num(), output);
  }

  // optional int32 channels = 2 [default = 0];
  if (has_channels()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->channels(), output);
  }

  // optional int32 height = 3 [default = 0];
  if (has_height()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->height(), output);
  }

  // optional int32 width = 4 [default = 0];
  if (has_width()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->width(), output);
  }

  // repeated float data = 5 [packed = true];
  if (this->data_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(5, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_data_cached_byte_size_);
  }
  for (int i = 0; i < this->data_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloatNoTag(
      this->data(i), output);
  }

  // repeated float diff = 6 [packed = true];
  if (this->diff_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(6, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_diff_cached_byte_size_);
  }
  for (int i = 0; i < this->diff_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloatNoTag(
      this->diff(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BlobProto::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 num = 1 [default = 0];
  if (has_num()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->num(), target);
  }

  // optional int32 channels = 2 [default = 0];
  if (has_channels()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->channels(), target);
  }

  // optional int32 height = 3 [default = 0];
  if (has_height()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->height(), target);
  }

  // optional int32 width = 4 [default = 0];
  if (has_width()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->width(), target);
  }

  // repeated float data = 5 [packed = true];
  if (this->data_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      5,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _data_cached_byte_size_, target);
  }
  for (int i = 0; i < this->data_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->data(i), target);
  }

  // repeated float diff = 6 [packed = true];
  if (this->diff_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      6,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _diff_cached_byte_size_, target);
  }
  for (int i = 0; i < this->diff_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->diff(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BlobProto::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 num = 1 [default = 0];
    if (has_num()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->num());
    }

    // optional int32 channels = 2 [default = 0];
    if (has_channels()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->channels());
    }

    // optional int32 height = 3 [default = 0];
    if (has_height()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->height());
    }

    // optional int32 width = 4 [default = 0];
    if (has_width()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->width());
    }

  }
  // repeated float data = 5 [packed = true];
  {
    int data_size = 0;
    data_size = 4 * this->data_size();
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _data_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated float diff = 6 [packed = true];
  {
    int data_size = 0;
    data_size = 4 * this->diff_size();
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _diff_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BlobProto::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BlobProto* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BlobProto*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BlobProto::MergeFrom(const BlobProto& from) {
  GOOGLE_CHECK_NE(&from, this);
  data_.MergeFrom(from.data_);
  diff_.MergeFrom(from.diff_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_num()) {
      set_num(from.num());
    }
    if (from.has_channels()) {
      set_channels(from.channels());
    }
    if (from.has_height()) {
      set_height(from.height());
    }
    if (from.has_width()) {
      set_width(from.width());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BlobProto::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BlobProto::CopyFrom(const BlobProto& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BlobProto::IsInitialized() const {

  return true;
}

void BlobProto::Swap(BlobProto* other) {
  if (other != this) {
    std::swap(num_, other->num_);
    std::swap(channels_, other->channels_);
    std::swap(height_, other->height_);
    std::swap(width_, other->width_);
    data_.Swap(&other->data_);
    diff_.Swap(&other->diff_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BlobProto::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BlobProto_descriptor_;
  metadata.reflection = BlobProto_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Datum::kChannelsFieldNumber;
const int Datum::kHeightFieldNumber;
const int Datum::kWidthFieldNumber;
const int Datum::kDataFieldNumber;
const int Datum::kLabelFieldNumber;
const int Datum::kFloatDataFieldNumber;
#endif  // !_MSC_VER

Datum::Datum()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Datum::InitAsDefaultInstance() {
}

Datum::Datum(const Datum& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Datum::SharedCtor() {
  _cached_size_ = 0;
  channels_ = 0;
  height_ = 0;
  width_ = 0;
  data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  label_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Datum::~Datum() {
  SharedDtor();
}

void Datum::SharedDtor() {
  if (data_ != &::google::protobuf::internal::kEmptyString) {
    delete data_;
  }
  if (this != default_instance_) {
  }
}

void Datum::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Datum::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Datum_descriptor_;
}

const Datum& Datum::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_caffe_2eproto();
  return *default_instance_;
}

Datum* Datum::default_instance_ = NULL;

Datum* Datum::New() const {
  return new Datum;
}

void Datum::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    channels_ = 0;
    height_ = 0;
    width_ = 0;
    if (has_data()) {
      if (data_ != &::google::protobuf::internal::kEmptyString) {
        data_->clear();
      }
    }
    label_ = 0;
  }
  float_data_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Datum::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 channels = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &channels_)));
          set_has_channels();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_height;
        break;
      }

      // optional int32 height = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_height:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &height_)));
          set_has_height();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_width;
        break;
      }

      // optional int32 width = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_width:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &width_)));
          set_has_width();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_data;
        break;
      }

      // optional bytes data = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_data()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_label;
        break;
      }

      // optional int32 label = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_label:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &label_)));
          set_has_label();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(53)) goto parse_float_data;
        break;
      }

      // repeated float float_data = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_float_data:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 53, input, this->mutable_float_data())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_float_data())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(53)) goto parse_float_data;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Datum::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 channels = 1;
  if (has_channels()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->channels(), output);
  }

  // optional int32 height = 2;
  if (has_height()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->height(), output);
  }

  // optional int32 width = 3;
  if (has_width()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->width(), output);
  }

  // optional bytes data = 4;
  if (has_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      4, this->data(), output);
  }

  // optional int32 label = 5;
  if (has_label()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->label(), output);
  }

  // repeated float float_data = 6;
  for (int i = 0; i < this->float_data_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(
      6, this->float_data(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Datum::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 channels = 1;
  if (has_channels()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->channels(), target);
  }

  // optional int32 height = 2;
  if (has_height()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->height(), target);
  }

  // optional int32 width = 3;
  if (has_width()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->width(), target);
  }

  // optional bytes data = 4;
  if (has_data()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->data(), target);
  }

  // optional int32 label = 5;
  if (has_label()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->label(), target);
  }

  // repeated float float_data = 6;
  for (int i = 0; i < this->float_data_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatToArray(6, this->float_data(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Datum::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 channels = 1;
    if (has_channels()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->channels());
    }

    // optional int32 height = 2;
    if (has_height()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->height());
    }

    // optional int32 width = 3;
    if (has_width()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->width());
    }

    // optional bytes data = 4;
    if (has_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->data());
    }

    // optional int32 label = 5;
    if (has_label()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->label());
    }

  }
  // repeated float float_data = 6;
  {
    int data_size = 0;
    data_size = 4 * this->float_data_size();
    total_size += 1 * this->float_data_size() + data_size;
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Datum::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Datum* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Datum*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Datum::MergeFrom(const Datum& from) {
  GOOGLE_CHECK_NE(&from, this);
  float_data_.MergeFrom(from.float_data_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_channels()) {
      set_channels(from.channels());
    }
    if (from.has_height()) {
      set_height(from.height());
    }
    if (from.has_width()) {
      set_width(from.width());
    }
    if (from.has_data()) {
      set_data(from.data());
    }
    if (from.has_label()) {
      set_label(from.label());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Datum::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Datum::CopyFrom(const Datum& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Datum::IsInitialized() const {

  return true;
}

void Datum::Swap(Datum* other) {
  if (other != this) {
    std::swap(channels_, other->channels_);
    std::swap(height_, other->height_);
    std::swap(width_, other->width_);
    std::swap(data_, other->data_);
    std::swap(label_, other->label_);
    float_data_.Swap(&other->float_data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Datum::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Datum_descriptor_;
  metadata.reflection = Datum_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace caffe

// @@protoc_insertion_point(global_scope)