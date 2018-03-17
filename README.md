# PerfectTea

## The Quest To Create the Perfect Cup of Tea!!

In 2018 we have tried to solved several of the worlds biggest problems, we have cars in space, we can order pizza online and have it delivered to our doors but we have one last limitation to overcome.....a good....no wait...Perfect cup of tea!

## How?

The machine is based upon a paper by the BSA to create the ideal cup of tea, to be used to compare different tea types. From this we have developed a way to create your ideal brew in 3 strengths. 

Place your tea into the infuser. Add hot water into your regular ~~viking horn~~ cup and placed in the machine. You select your required strength and size of cup, then you relax and let the machine take care of the rest. Add milk to taste. 

## Equipment

The machine is made up of:

- 1x Raspberry Pi 3
- 1x 3.5 Inch touchscreen 
- 1x DS18B20 Digital Temperature Sensor
- 1x DS1307 Real Time Clock
- 1x DC Motor
- 1x Custom Designed Vintage Rapid Prototyped Frame (aka. Meccano)


## How To Build the Software

Make sure you have build-essentials and qmake installed. If not, run 
```sudo apt-get install qt5-qmake build-essential```
After that you can just build the software with:
```
qmake
make
sudo ./PerfecTea_GUI
```

sudo command when launching is needed because of the program needing elevated privileges to set the date and time at the initial startup.

## Software Flow Diagram

![alt text](https://i.imgur.com/Fow0LjU.png)

## GUI Mock Ups

Start Screen:

![alt text](https://i.imgur.com/BcuMKYR.png)

Menu:

![alt text](https://i.imgur.com/vwhD9Zn.png)


## Early Designs:

![alt text](https://i.imgur.com/EE7dLig.jpg)
![alt text](https://i.imgur.com/CwR4onM.jpg)


## Prototype Frame

![alt text](https://i.imgur.com/UWVkcXK.jpg)

## Adding a RTC
A real time clock must be added to the system to allow the use of a clock and timer as the machine does not have an active internet connection when in use. 

These instructions are based on those described in: https://www.raspberrypi.org/forums/viewtopic.php?t=85683

Using the DS1307 circuit we must find it on the I2C bus.


