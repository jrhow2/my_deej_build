# jrhow2's Deej Build
## Description
This is a repository to document and share my work on my first Deej build, which includes 1 rotary potentiometer for master volume, 5 slide potentiometers, 6 latching mute 
buttons with LED indicators (one for each slider), and a 12-key macropad. This is primarily based on [miodec's fork](https://github.com/Miodec/deej), which 
adds support for programmable buttons to the original deej project from [omiharel](https://github.com/omriharel/deej).

The main additions I have made to these projects are the use of the [keypad.h](https://github.com/Chris--A/Keypad) library to increase the number of
programmable buttons past what would be achievable using the arduino nano's pins for individual buttons, and the use of latching led as mute buttons/LED indicators. An autohotkey script was used to expand the functionality of the programmable buttons, and a custom PCB was created to more easily add the macropad keyswitches.

In this repository, I've included that CAD files for the enclosure produced in Fusion360, the PCB schematics and gerber files, the customized arduino sketch, and the autohotkey script.

## Wokwi Cicuit design/code simulation
[Wokwi.com](wokwi.com) was used for circuit design and siumlation of the Arduino Nano and code. The Wokwi simulation can be found [here](https://wokwi.com/projects/416743878244643841), and the .zip files exported from Wokwi can be found at [deej_jrhow2_wokwi.zip](deej_jrhow2_wokwi.zip).

## Mechancal Design
###
### Part's list
### 3D-printed Keycaps



## PCB Design

## Arduino Sketch

## Autohotkey script

