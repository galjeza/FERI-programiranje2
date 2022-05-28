//
// Created by galje on 3/28/2022.
//

#include "Phone.h"

Phone::Phone(std::string id, std::string name, int battery) :Device(id,name),battery(battery){
}

std::string Phone::toString() const {
    std::string str = Device::toString()+", "+ std::to_string(battery)+" %";
    return str;
}
