

#ifndef _hdisplay_h
#define _hdisplay_h

#include <U8g2lib.h>
#include <U8x8lib.h>
#include <Wire.h>

#define SDA 5
#define SCL 4



int setupScreen();


class espDisplay{
  public:
    espDisplay();
    void print(void);
    void print(char*);
    void start(){chipDisplay.begin();}

  private:

    U8G2_SSD1306_128X64_NONAME_F_HW_I2C chipDisplay;

    int line = 0;

};

#endif
