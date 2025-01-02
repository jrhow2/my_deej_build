# jrhow2's Deej Build
## Description

![image_jrhow2's_deej](https://github.com/user-attachments/assets/8bf0b718-9ef5-4116-bb25-6613bdfc643b)

This is a repository to document and share my work on my first Deej build, which includes 1 rotary potentiometer for master volume, 5 slide potentiometers, 6 latching mute 
buttons with LED indicators (one for each slider), and a 12-key macropad. This is primarily based on [miodec's fork](https://github.com/Miodec/deej), which 
adds support for programmable buttons to the original deej project from [omiharel](https://github.com/omriharel/deej).

The main additions I have made to these projects are the use of the [keypad.h](https://github.com/Chris--A/Keypad) library to increase the number of
programmable buttons past what would be achievable using the arduino nano's pins for individual buttons, and the use of latching led as mute buttons/LED indicators. An autohotkey script was used to expand the functionality of the programmable buttons, and a custom PCB was created to more easily add the macropad keyswitches.

In this repository, I've included that CAD files for the enclosure produced in Fusion360, the PCB schematics and gerber files, the customized arduino sketch, and the autohotkey script.

## Wokwi Cicuit design/code simulation
[Wokwi.com](https://wokwi.com) was used for circuit design and siumlation of the Arduino Nano and code. The Wokwi simulation can be found [here](https://wokwi.com/projects/416743878244643841), and the .zip files exported from Wokwi can be found at [deej_jrhow2_wokwi.zip](deej_jrhow2_wokwi.zip).

Note that since wokwi does not include latching buttons and because there was some difficulty with how I soldered my sliders in the final configuration, the code in wokwi does not exactly match the final code in the [provided .ino file](jrhow2s_deej.ino).

## [Mechancal Design](mechanical_design)
### Fusion 360 design files
The enclosure was designed in Fusion 360, and I've provided the [.f3d file](mechanical_design/f360_jrhow2's_deej.f3d).
## 3D printing
Slicing was performed in [Orca Slicer](https://github.com/SoftFever/OrcaSlicer) and the models were printed on a BambuLab P1S with an AMS unit for multi-color printing. I have provided the [Orca Slicer project file](mechanical_design/orca-slicer_jrhow2's_deej.3mf) as well as the [.stls](mechanical_design/STLs) of all of the parts.

To get the faux carbon fiber look on the top surface, I used [this textured plate](https://www.amazon.com/gp/product/B0CP5X3H2Z/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1) purchased from Amazon. These kinds of plates work best with slightly increased bed temperature and decreased speed for the first layer or two.

### Part's list
### 3D-printed Keycaps



## PCB Design

## Arduino Sketch

## Autohotkey script

