#include "DigiKeyboard.h"
#include "OneButton.h" // using this button library since buttons provide veeery complex interaction

#define buttonPin 0

OneButton btn = OneButton(buttonPin, true, true); // Initialise button to GND, active low, enable pull up

void setup() {
  btn.attachPressStart(endZoom);
  DigiKeyboard.sendKeyStroke(0); //send first keystroke here to avoid delay when btn pressed
}
void loop() {
  btn.tick();
  //DigiKeyboard.delay(500); //prevents sending the keystroke more than once (could the cause be wrong resistor value?)
}
void endZoom() {
  DigiKeyboard.sendKeyStroke(63);
}
