#!/bin/bash
rm modules/*.ko
make clean
make mrproper
make operaul_defconfig
make -j9
find . -name '*.ko' -exec cp {} modules/  \;
