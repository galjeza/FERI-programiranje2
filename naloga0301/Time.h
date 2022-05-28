//
// Created by galje on 3/19/2022.
//

#ifndef NALOGA0301_TIME_H
#define NALOGA0301_TIME_H
#include <string>

class Time {
private:
    int hour;
    int minute;
    int second;
    static int maxHour;
    static int noonHour;
public:
    Time(int hour, int minute, int second);
    std::string toString() const;
    std::string toString12HourFormat() const;
    static bool isTimeValid(unsigned int hour, unsigned int minute,unsigned int second);
    static Time parse12HourFormat(const std::string& stringTime);
    static Time parse(const std::string& time);
};

#endif //NALOGA0301_TIME_H
