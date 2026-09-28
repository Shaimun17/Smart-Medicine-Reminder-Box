#pragma once
#include <stdint.h>

typedef bool boolean;
typedef uint8_t byte;

#define INPUT           0
#define OUTPUT          1
#define INPUT_PULLUP    2
#define LOW             0
#define HIGH            1
#define PI              3.14159265358979323846
#define sq(x)           ((x)*(x))
#define min(a,b)        ((a)<(b)?(a):(b))
#define max(a,b)        ((a)>(b)?(a):(b))
#define constrain(v,lo,hi) ((v)<(lo)?(lo):((v)>(hi)?(hi):(v)))

void          pinMode(int pin, int mode);
void          digitalWrite(int pin, int val);
int           digitalRead(int pin);
int           analogRead(int pin);
void          analogWrite(int pin, int val);
void          delay(unsigned long ms);
void          delayMicroseconds(unsigned int us);
unsigned long millis();
unsigned long micros();
long          pulseIn(int pin, int state, unsigned long timeout = 1000000UL);
void          tone(int pin, unsigned int freq, unsigned long dur = 0);
void          noTone(int pin);
long          random(long hi);
long          random(long lo, long hi);
void          randomSeed(unsigned long seed);

struct SerialClass {
    void begin(long baud);
    void print(const char* s);
    void print(int n);
    void print(long n);
    void print(float f);
    void print(char c);
    void println(const char* s);
    void println(int n);
    void println(long n);
    void println(float f);
    void println();
    int  available();
    int  read();
};
extern SerialClass Serial;
