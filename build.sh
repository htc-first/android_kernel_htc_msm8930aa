#!/bin/bash
rm output/system/lib/modules/*.ko
rm output/kernel/zImage
make clean
make mrproper
make operaul_defconfig
make -j9
cp arch/arm/boot/zImage output/kernel/zImage
find . -name '*.ko' -exec cp {} output/system/lib/modules/  \;
cd output
zip -r Jmzkernel.zip *