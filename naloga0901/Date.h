//
// Created by galje on 5/7/2022.
//

#ifndef NALOGA0901_DATE_H
#define NALOGA0901_DATE_H
#include <string>

class Date {
    friend std::ostream& operator<<(std::ostream &out, const Date &date){out<<date.toString();return out;};
private:
    unsigned int day;
    unsigned int month;
    unsigned int year;
public:
    Date(unsigned int day,unsigned int month, unsigned int year): day(day),month(month),year(year){};
    std::string toString() const{
        std::string stringDate = std::to_string(day)+"/"+std::to_string(month)+"/"+std::to_string(year);
        return stringDate;
    };
    bool operator==(const Date& other) const{
        return (day==other.day&&month ==other.month && year==other.year);
    }
    Date& operator++(){
        int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        this->day++;
        if(day>months[month-1]){
            this->month++;
            this->day=1;
        }
        if(month>12){
            this->month=1;
            this->year++;
        }
        return * this;
    }
    Date operator++(int dummy){
        operator++();
    }

};




#endif //NALOGA0901_DATE_H
