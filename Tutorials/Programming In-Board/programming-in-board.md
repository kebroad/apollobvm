### Programming In-Board

In order to successfully upload the sketches, you must first bootload the ATMega328. Instructions here:
https://www.arduino.cc/en/Tutorial/ArduinoToBreadboard


Here is the schematic from Arduino illustrates how to connect to an Arduino on a breadboard:

![alt text][arduinobreadboard]


There are 5 pins that need to be connected to the ATMega328 in order to program it. They are:

 * 5V (Red wires)
 * GND (Black wires)
 * TX (yellow wire)
 * RX (green wire)
 * RESET (Blue wire)

This was incorporated into the PCB design to allow in-board programming, after the microcontroller was placed into the socket. Here's an illustration of what it looks like on our schematic and board:

![alt text][pcbprogramming] ![alt text][actualboard]

We used female sockets to program the chips on the fly. The IC on the left is the IC for the slave and the IC on the right is the master. For both, 5V and GND needs to be connected, but depending on which one you want to program, the other 3 wires should be in their respective connectors.




All credit of Arduino images belongs to Arduino.

[arduinobreadboard]: https://github.com/kebroad/TigerVent/blob/master/Tutorials/Programming%20In-Board/images/arduinobreadboard.JPG


[pcbprogramming]: https://github.com/kebroad/TigerVent/blob/master/Tutorials/Programming%20In-Board/images/pcbprogramming.JPG

[actualboard]: https://github.com/kebroad/TigerVent/blob/master/Tutorials/Programming%20In-Board/images/actualboard.jpg