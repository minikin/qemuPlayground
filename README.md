#### Pre requirements: Ubuntu

#### Install Sourcery CodeBench Lite 2013.11-24 for ARM EABI

Download Sourcery CodeBench Lite:
https://sourcery.mentor.com/GNUToolchain/release2635

Install dependency:

`sudo apt-get install libgtk2.0-0:i386 libxtst6:i386 gtk2-engines-murrine:i386 \
lib32stdc++6 libxt6:i386 libdbus-glib-1-2:i386 libasound2:i386`

Make file executable:

`chmod +x file-name.run`

Run program:

`sudo ./file-name.run`

#### Install QEMU:

`sudo apt-get install qemu`

Check if QEMU works (get a list of all supported machines):  
`qemu-system-arm -machine help`

#### Build freeRTOS with MQTT example: