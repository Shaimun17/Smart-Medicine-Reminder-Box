#pragma once
#include <stdint.h>

class LiquidCrystal_I2C {
public:
    LiquidCrystal_I2C(uint8_t addr, uint8_t cols, uint8_t rows);
    void init();
    void begin(uint8_t cols, uint8_t rows);
    void backlight();
    void noBacklight();
    void clear();
    void home();
    void setCursor(uint8_t col, uint8_t row);
    void print(const char* s);
    void print(int n);
    void print(long n);
    void print(float f);
    void print(char c);
    void write(uint8_t ch);
    void display();
    void noDisplay();
    void blink();
    void noBlink();
    void cursor();
    void noCursor();
};
