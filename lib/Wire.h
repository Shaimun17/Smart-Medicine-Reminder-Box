#pragma once
#include <stdint.h>

class TwoWire {
public:
    void begin();
    void begin(int address);
    void beginTransmission(int address);
    void endTransmission();
    void requestFrom(int address, int count);
    void write(int data);
    int  read();
    int  available();
};

extern TwoWire Wire;
