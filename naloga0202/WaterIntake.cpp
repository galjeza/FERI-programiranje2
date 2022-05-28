#include <sstream>
#include "WaterIntake.h"
WaterIntake::WaterIntake(unsigned int day, unsigned int month,unsigned int year,float quantity){
    this->day = day;
    this->month = month;
    this->year = year;
    this->quantity = quantity;
}
unsigned int WaterIntake::getYear() const {
    return year;
}

unsigned int WaterIntake::getDay() const {
    return day;
}

unsigned int WaterIntake::getMonth() const {
    return month;
}

float WaterIntake::getQuantity() const {
    return quantity;
}

void WaterIntake::setQuantity(float qty) {
    this->quantity = qty;
}

void WaterIntake::addQuantity(float qty) {
    this->quantity += qty;
}

std::string WaterIntake::toString() const {
    std::stringstream ss;
    ss<<day<<"."<<month<<"."<<year<<" :"<<quantity;
    std::string info = ss.str();
    return info;

}



