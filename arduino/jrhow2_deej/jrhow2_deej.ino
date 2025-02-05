const int NUM_SLIDERS = 6;


const int analogInputs[NUM_SLIDERS] = {A7, A2, A3, A4, A5, A6};
const int NUM_BUTTONS = 12;
const int NUM_MUTES = 6;
int analogSliderValues[NUM_SLIDERS];
int buttonValues[NUM_BUTTONS];
const int mutableSliders[NUM_MUTES] = {1,2,3,4,5,6};
const int muteButtons[NUM_MUTES] = {3,2,A1,4,5,6};
bool muted[NUM_SLIDERS];
int muteValues[NUM_MUTES];

#include <light_CD74HC4067.h>
#include <Keypad.h>


bool firstLoop = true; // Initialize a boolean variable as true
const byte ROWS = 4; //four rows
const byte COLS = 3; //four columns
//define the cymbols on the buttons of the keypads
char keyVals[NUM_BUTTONS] = {'0','1','2','3','4','5','6','7','8','9','A','B'};
char hexaKeys[ROWS][COLS] = {
  {'0','1','2'},
  {'3','4','5'},
  {'6','7','8'},
  {'9','A','B'}
};
byte rowPins[ROWS] = {10,9,8,7}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {11,12,A0}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup() {
  for (int i = 0; i < NUM_BUTTONS; i++) {
    buttonValues[i] = 0;
  }
  // pinMode(signal_pin, INPUT_PULLUP); // Set as input for reading through signal pin
  for (int i = 0; i < NUM_SLIDERS; i++) {
    pinMode(analogInputs[i], INPUT);
  }
  for (int i = 0; i < NUM_MUTES; i++) {
    pinMode(muteButtons[i], INPUT_PULLUP);
  }
  
  Serial.begin(9600);
}
static unsigned long lastPressTime = 0;
void loop() {
  updateSliderValues();
  sendSliderValues();
  updateButtonValues();

   // Actually send data (all the time)
  // printSliderValues(); // For debug
  //delay(10);
}

void updateButtonValues() {
  for (int i = 0; i < NUM_BUTTONS; i++) {
   buttonValues[i] = 0;
   }

  char customKey = customKeypad.getKey();
  
  for (int i=0; i<NUM_BUTTONS;i++) {
    if (customKey == keyVals[i] && buttonValues[i] == 0){
      buttonValues[i] = 1;
      lastPressTime = millis();
    }
  }
}

void updateSliderValues() {
  for (int i = 0; i < NUM_SLIDERS; i++) {
    // analogSliderValues[i] = analogRead(analogInputs[i]);
    if (i == 0) {
      // analogSliderValues[i] = analogRead(analogInputs[i]);
     analogSliderValues[i] = (1023 - analogRead(analogInputs[i]));
    }
    else {
     analogSliderValues[i] = analogRead(analogInputs[i]);
     analogSliderValues[i] = analogRead(analogInputs[i]);
    }
    
  }

  for (int i = 0; i < NUM_MUTES; i++) {
    muteValues[i] = digitalRead(muteButtons[i]);
    // String printedString = String((int)muteValues[i]);  
    // Serial.write(printedString.c_str());
    if (muteValues[i] == 0) {
       muted[mutableSliders[i]-1] = true;
      //  String printedString = String((int)mutableSliders[i]);
      //  Serial.write(printedString.c_str());

    }
    else if (muteValues[i] == 1) {
      muted[mutableSliders[i]-1] = false;

    }
  }
  
  for (int i = 0; i < NUM_SLIDERS; i++) {
    // String printedString = String((int)muted[i]);
    // Serial.write(printedString.c_str());
    if (muted[i]) {
      analogSliderValues[i] = 0;
    }
    
  }

}

void sendSliderValues() {
  String builtString = String("");

  for (int i = 0; i < NUM_SLIDERS; i++) {
    builtString += "s";
    builtString += String((int)analogSliderValues[i]);

    if (i < NUM_SLIDERS - 1) {
      builtString += String("|");
    }
  }

  if(NUM_BUTTONS > 0){
    builtString += String("|");
  }


  for (int i = 0; i < NUM_BUTTONS; i++) {
    builtString += "b";
    builtString += String((int)buttonValues[i]);

    if (i < NUM_BUTTONS - 1) {
      builtString += String("|");
    }
  }

  Serial.println(builtString);
}

void printSliderValues() {
  for (int i = 0; i < NUM_SLIDERS; i++) {
    String printedString = String("Slider #") + String(i + 1) + String(": ") + String(analogSliderValues[i]) + String(" mV");
    // String printedString = String(analogSliderValues[i]);

    Serial.write(printedString.c_str());

    if (i < NUM_SLIDERS - 1) {
      Serial.write(" | ");
    } else {
      Serial.write("\n");
    }
  }
}

