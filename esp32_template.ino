
#include "hdisplay.h"



void setup() {
  Serial.begin(115200);
  setupScreen();

}


void loop() {
  // put your main code here, to run repeatedly:

  chipDisplay.firstPage();
  Serial.print("displaypages\n");
  do {
    chipDisplay.setFont(u8g2_font_ncenB14_tr);
    chipDisplay.drawStr(0,20,"Hello World?");
  } while ( chipDisplay.nextPage() );
  delay(1000);

  Serial.print("printing\n");
  chipDisplay.clearDisplay();

  chipDisplay.setFont(u8g2_font_ncenB14_tr);
  chipDisplay.setCursor(0, 15);
  chipDisplay.print("Hello World!");
  chipDisplay.sendBuffer();
  delay(1000);
  chipDisplay.clearDisplay();
  chipDisplay.setCursor(0, 15);
  chipDisplay.print("hello World");
  chipDisplay.sendBuffer();
  delay(1000);

}
