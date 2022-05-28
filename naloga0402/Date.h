//
// Created by galje on 3/20/2022.
//

#ifndef NALOGA0402_DATE_H
#define NALOGA0402_DATE_H

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


#endif //NALOGA0402_DATE_H
