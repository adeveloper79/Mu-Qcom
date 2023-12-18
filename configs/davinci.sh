#!/bin/bash

# Build an Android kernel that is actually UEFI disguised as the Kernel
cat ./BootShim/AARCH64/BootShim.bin "./Build/davinciPkg-AARCH64/${_TARGET_BUILD_MODE}_CLANG38/FV/DAVINCI_UEFI.fd" > "./Build/davinciPkg-AARCH64/${_TARGET_BUILD_MODE}_CLANG38/FV/davinci_UEFI.fd-bootshim"||exit 1
gzip -c < "./Build/davinciPkg-AARCH64/${_TARGET_BUILD_MODE}_CLANG38/FV/davinci_UEFI.fd-bootshim" > "./Build/davinciPkg-AARCH64/${_TARGET_BUILD_MODE}_CLANG38/FV/davinci_UEFI.fd-bootshim.gz"||exit 1
cat "./Build/davinciPkg-AARCH64/${_TARGET_BUILD_MODE}_CLANG38/FV/davinci_UEFI.fd-bootshim.gz" ./ImageResources/DTBs/davinci.dtb > ./ImageResources/bootpayload.bin||exit 1

# Create bootable Android boot.img
python3 ./ImageResources/mkbootimg.py \
  --kernel ./ImageResources/bootpayload.bin \
  --ramdisk ./ImageResources/ramdisk \
  --kernel_offset 0x00008000 \
  --ramdisk_offset 0x01000000 \
  --tags_offset 0x00000100 \
  --os_version 0 \
  --os_patch_level "$(date '+%Y-%m')" \
  --header_version 4 \
  -o Mu-davinci.img \
  ||_error "\nFailed to create Android Boot Image!\n"