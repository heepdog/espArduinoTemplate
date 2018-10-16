#include <Wire.h>


#include "hdisplay.h"

espDisplay chipDisplay;

void setup() {
  Serial.begin(115200);

//tried to move .begin() into espDisplay ctor, would not enable
  chipDisplay.start();
  //print 2 lines of test code
  chipDisplay.print();
  //print function
  chipDisplay.print("Hello Lewis");

}


void loop() {
  // put your main code here, to run repeatedly:



}
