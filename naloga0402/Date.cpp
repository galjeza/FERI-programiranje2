//
// Created by galje on 3/20/2022.
//

#include "Date.h"

Date::Date(unsigned int day, unsigned int month, unsigned int year): day(day),month(month),year(year){
}

std::string Date::toString() const {
    std::string stringDate = std::to_string(day)+"/"+std::to_string(month)+"/"+std::to_string(year);
    return stringDate;
}
