#include <iostream>
#include "Time.h"
int main() {
    Time wakeUpTime(7,9,3);
    std::cout<<wakeUpTime.toString()<<std::endl;
    std::cout<<wakeUpTime.toString12HourFormat()<<std::endl;

    Time bedTime(22,30,10);
    std::cout<<bedTime.toString()<<std::endl;
    std::cout<<bedTime.toString12HourFormat()<<std::endl;

    Time invalidTime(25,30,10);
    std::cout<<invalidTime.toString()<<std::endl;
    std::cout<<invalidTime.toString12HourFormat()<<std::endl;

    Time time(23,9,12);
    std::string stringTime = time.toString();
    Time parsedTime = Time::parse(stringTime);
    std::cout<<parsedTime.toString()<<std::endl;
    std::cout<<parsedTime.toString12HourFormat()<<std::endl;

    std::cout<<Time::parse12HourFormat("01:10:30 PM").toString()<<std::endl;

    return 0;
}
