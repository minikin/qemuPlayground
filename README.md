#### Pre requirements: Ubuntu

#### Install Sourcery CodeBench Lite 2013.11-24 for ARM EABI

Download Sourcery CodeBench Lite:

https://sourcery.mentor.com/GNUToolchain/package12192/public/arm-none-eabi/arm-2013.11-24-arm-none-eabi.bin

Install dependency:

`sudo apt-get install libgtk2.0-0:i386 libxtst6:i386 gtk2-engines-murrine:i386 \
lib32stdc++6 libxt6:i386 libdbus-glib-1-2:i386 libasound2:i386`

Make file executable:

`chmod +x arm-2013.11-24-arm-none-eabi.bin`

Run:

`sudo ./arm-2013.11-24-arm-none-eabi.bin`

#### Install QEMU:

`sudo apt-get install qemu`

Check if QEMU works (get a list of all supported machines):

`qemu-system-arm -machine help`

#### Build & Run freeRTOS with MQTT example:

Build:

A convenience Bash script setenv.sh is provided to set paths to toolchain's commands and libraries.
You may edit it and adjust the paths according to your setup. To set up the necessary paths, simply type:

`. ./setenv.sh`

If you wish to run the image anywhere else except in Qemu, you will probably have to edit the linker script qemu.ld and adjust the startup address properly.

To build the image with the test application, just run `make -f Makefile` or `make rebuild -f Makefile`. If the build process is successful, the image file `image.bin` will be ready to boot.

Run:

To run the target image in Qemu, enter the following command:

`qemu-system-arm -M versatilepb -nographic -m 128 -kernel image.bin`

A convenience Bash script _start_qemu.sh_ is provided. If necessary, you may edit it and adjust paths to Qemu and/or target image.

The demo application will run infinitely so it must be stopped manually by "killing" the instance of Qemu (an "equivalent" to switching off the board). A convenience Bash script _stop_qemu.sh_ (it must be run in another shell) is provided to automate the process. Note that it may not work properly if multiple instances of qemu-system-arm are running.

For more details, see extensive comments in both scripts.
