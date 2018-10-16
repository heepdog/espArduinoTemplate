#include "hdisplay.h"
#include <U8g2lib.h>
#include <U8x8lib.h>
#include <Wire.h>




espDisplay::espDisplay(): chipDisplay(U8G2_R0, U8X8_PIN_NONE, SCL, SDA){

}
void espDisplay::print(){

  chipDisplay.clearDisplay();

  chipDisplay.setFont(u8g2_font_ncenB14_tr);
  chipDisplay.setCursor(0, 16);
  chipDisplay.print("Hello Lewis!");
  chipDisplay.sendBuffer();
  delay(1000);
//  chipDisplay.clearDisplay();
  chipDisplay.setCursor(0, 32);
  chipDisplay.print("Hello World");
  chipDisplay.sendBuffer();
  delay(1000);

  
}

void espDisplay::print(char* out){
  chipDisplay.setFont(u8g2_font_ncenB14_tr);

  chipDisplay.setCursor(0, 48);
  chipDisplay.println("Hello ");
  chipDisplay.setCursor(0, 64);
  chipDisplay.print(out);
  chipDisplay.sendBuffer();
}
