make
rm /tmp/nin_cifar10.*
sh scp.sh
mpirun -n 3 -hostfile HOSTFILE ./test/nin_cifar10
