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
- [5x 60 mm Slide Potentiometers](https://www.amazon.com/dp/B07PNDLKQQ?ref_=ppx_hzsearch_conn_dt_b_fed_asin_title_1)
- [1x Rotary Potentiometer](https://www.amazon.com/dp/B07B64MWRF?ref_=ppx_hzsearch_conn_dt_b_fed_asin_title_2)
- [12x Cherry MX brown keyswitches](https://www.amazon.com/Cherry-MX-RGB-Mechanical-Keyboard/dp/B0CBS5M29R/ref=sr_1_2_sspa?crid=1GYDEP9RCY5T0&dib=eyJ2IjoiMSJ9.CN8d0MrS5DmQJVn-3xpAB0mhQuQKi8KCveO0JcbJzXpjdPU5HlAwrbz5tbdCWk3kthYGaP7PowyWtKo4o5DwA8xeNte1qEcJPl-tHwgDbC15iH93cMmkFZe0xWSh1AFUqjXYJmBKIA4P6uL1rWdwi3rx7YHnh_XPOvBDt01OFRK_tM1kTGipKEFM-LWU1gadXluddE0z2FO6sqxmrbP47VR9et4cIyCPHad9PMV20qwvgUSGjHwJ7VQUZ6RM5yiMxK3H-e-PVNU_TkNI8w8Ro4aga5POcPGEx3rvmk47ERo.JgLyCq7_-X_gLAnXje8SgQaPr5BdVQ0jFXflrShL0JE&dib_tag=se&keywords=cherry%2Bmx%2Bbrown%2Bkeyswitch&qid=1738734329&s=industrial&sprefix=cherry%2Bmx%2Bbrown%2Bkeyswitc%2Cindustrial%2C157&sr=1-2-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&smid=AK7PAPV76H5NA&th=1) (or similar)
- [6x Latching 12mm latching button with LED](https://www.amazon.com/dp/B09YLXBHF6?ref_=ppx_hzsearch_conn_dt_b_fed_asin_title_3&th=1) (2 per order)
- [Assort M2 screws]() (a few of the holes are a bit shallower than others)
- [Elegoo Arduino Nano](https://www.amazon.com/ELEGOO-Arduino-ATmega328P-Without-Compatible/dp/B0713XK923/ref=sr_1_1_sspa?crid=2MQMFAE0FY1Z8&dib=eyJ2IjoiMSJ9.2thvq2A9ZsB75nwbFEpKLNare4EarLgE4_F7j-Bub2L3Dptzgt_789kuIaDLa3JEZPx4hOx-0XsgtrCr5ODgtectiKpfiS-EwMLYMbTm3-1Y0Ps6ziLABlBeyZnuvERKeSZlDR1-K9arOfYLnbvjHKibeIq8u-NfcilkmMGuvIkGhDF-UnZcuOMcGDx1Z1ZpTYCzasz53JTGUo3VJkckAOlmqv41opV5_m7QzFCSfjfq8PhjfRpXVy0oFbJLJ7DgswiqRYJJaj3ZVvBrdKsxvUVHj_74kFZ13D37oFWgwb4.3IOTlCk3ZtmxhoVleWZvcktHRexhEUHSoUZvN_WBMHw&dib_tag=se&keywords=elegoo+nano&qid=1738734462&s=industrial&sprefix=elegoo+nano%2Cindustrial%2C186&sr=1-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1)
- Wires, Solder, soldering iron, etc.

### 3D-printed Keycaps



## PCB Design

## Arduino Sketch

## Autohotkey script

