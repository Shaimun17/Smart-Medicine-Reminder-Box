#pragma once
#include <stdint.h>

class DateTime {
public:
    DateTime();
    DateTime(uint32_t t);
    DateTime(int year, int month, int day, int hour = 0, int min = 0, int sec = 0);
    int      year()   const;
    int      month()  const;
    int      day()    const;
    int      hour()   const;
    int      minute() const;
    int      second() const;
    uint32_t unixtime() const;
};

class RTC_DS3231 {
public:
    bool     begin();
    bool     lostPower();
    void     adjust(const DateTime& dt);
    DateTime now();
};
