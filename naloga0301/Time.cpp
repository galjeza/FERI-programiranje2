//
// Created by galje on 3/19/2022.
//

#include "Time.h"

int Time::maxHour = 24;
int Time::noonHour = 12;

Time::Time(int hour, int minute, int second) {
    if (Time::isTimeValid(hour, minute, second)) {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    } else {
        this->hour = 0;
        this->minute = 0;
        this->second = 0;
    }
}

std::string Time::toString() const {
    std::string stringTime;
    std::string formattedHour = std::to_string(hour);
    std::string formattedMinute = std::to_string(minute);
    std::string formattedSecond = std::to_string(second);
    if (hour < 10) {
        formattedHour = "0" + formattedHour;
    }
    if (minute < 10) {
        formattedMinute = "0" + formattedMinute;
    }
    if (second < 10) {
        formattedSecond = "0" + formattedSecond;
    }
    stringTime = formattedHour + ":" + formattedMinute + ":" + formattedSecond;
    return stringTime;
}

std::string Time::toString12HourFormat() const {
    std::string AMorPM;
    int h = hour;
    if (h == 0) {
        h += Time::noonHour;
        AMorPM = "AM";
    } else if (h > 1 && h < Time::noonHour) {
        AMorPM = "AM";
    } else if (h > 11 && h < 13) {
        AMorPM = "PM";
    } else if (h > Time::noonHour && h < Time::maxHour) {
        h -= Time::noonHour;
        AMorPM = "PM";
    }
    std::string stringTime;
    std::string formattedHour = std::to_string(h);
    std::string formattedMinute = std::to_string(minute);
    std::string formattedSecond = std::to_string(second);

    if (h < 10) {
        formattedHour = "0" + formattedHour;
    }
    if (minute < 10) {
        formattedMinute = "0" + formattedMinute;
    }
    if (second < 10) {
        formattedSecond = "0" + formattedSecond;
    }
    stringTime = formattedHour + ":" + formattedMinute + ":" + formattedSecond + " " + AMorPM;

    return stringTime;
}

bool Time::isTimeValid(unsigned int hour, unsigned int minute, unsigned int second) {
    return (hour < Time::maxHour && minute < 60 && second < 60 && hour >= 0 && minute >= 0 && second >= 0);
}

Time Time::parse(const std::string &time) {
    int h = std::stoi(time.substr(0, 2));
    int m = std::stoi(time.substr(3, 5));
    int s = std::stoi(time.substr(6, 8));
    return {h, m, s};

}

Time Time::parse12HourFormat(const std::string &stringTime) {
    int h = std::stoi(stringTime.substr(0, 2));
    int m = std::stoi(stringTime.substr(3, 5));
    int s = std::stoi(stringTime.substr(6, 8));
    if (stringTime.substr(9, 11) == "AM") {
        return {h, m, s};
    }
    return {h + 12, m, s};
}


