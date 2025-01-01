# jrhow2's Deej
## Description
This is a repository to share my work on my first Deej build, which includes 1 rotary potentiometer for master volume, 5 slide potentiometers, 6 latching mute 
buttons with LED indicators (one for each slider), and a 12-key macropad. This is primarily based on [miodec's fork](https://github.com/Miodec/deej), which 
adds support for programmable buttons to the original deej project from [omiharel](https://github.com/omriharel/deej).

The main additions I have made to these projects are the use of the [keypad.h](https://github.com/Chris--A/Keypad) library to increase the number of
programmable buttons past what would be achievable using the arduino nano's pins for individual buttons.
