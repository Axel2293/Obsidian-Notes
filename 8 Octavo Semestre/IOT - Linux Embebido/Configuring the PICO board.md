# Bridge pins to enable flash to EMMC
# Write Image to EMMC

Use *UUU* tool to flash the image onto the card. The image is the *imx-image.wic* file. The binary to manage the flash is the *.bin* file.
```bash
sudo uuu/linux64/uuu -b emmc_all imx8mm/pico-imx8mm/pico-imx8mm-flash.bin ../../imx-image-full-pico-imx8mm-20230810041143.rootfs.wic
```

# Intall SDK
```bash
./fsl-imx-xwayland-glibc-x86_64-imx-image-full-armv8a-pico-imx8mm-toolchain-5.15-kirkstone.sh
```
# Add vars with binaries of SDK
```bash
source /opt/fsl-imx-xwayland/5.15-kirkstone/environment-setup-armv8a-poky-linux
```