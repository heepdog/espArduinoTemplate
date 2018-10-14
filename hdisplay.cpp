#include "hdisplay.h"

int setupScreen()
{
  chipDisplay.begin();
  chipDisplay.setFont(u8g2_font_ncenB14_tr);
  chipDisplay.clearDisplay();
  chipDisplay.setCursor(0, 15);

}

