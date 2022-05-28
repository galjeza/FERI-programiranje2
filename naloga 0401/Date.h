//
// Created by galje on 3/19/2022.
//

#ifndef NALOGA_0401_DATE_H
#define NALOGA_0401_DATE_H


#include <string>

class Date {
private:
    unsigned int day;
    unsigned int month;
    unsigned int year;
public:
    Date(unsigned int day,unsigned int month, unsigned int year);
    std::string toString() const;
};


#endif //NALOGA_0401_DATE_H
