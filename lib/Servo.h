#pragma once
#include <stdint.h>

class Servo {
public:
    Servo();
    uint8_t attach(int pin);
    uint8_t attach(int pin, int minPulse, int maxPulse);
    void    detach();
    void    write(int value);
    void    writeMicroseconds(int value);
    int     read();
    int     readMicroseconds();
    bool    attached();
};
