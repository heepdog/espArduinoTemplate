

#ifndef _hdisplay_h
#define _hdisplay.h

#include <U8g2lib.h>


#define SDA 5
#define SCL 4

extern U8G2_SSD1306_128X64_NONAME_F_HW_I2C chipDisplay(U8G2_R0, U8X8_PIN_NONE, SCL, SDA);

int setupScreen();


#endif
