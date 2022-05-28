//
// Created by galje on 3/28/2022.
//

#include "TV.h"

TV::TV(std::string id, std::string name, bool turnedOn, int volume): Device(id,name),turnedOn(turnedOn),volume(volume) {
}

std::string TV::toString() const {
    std::string str = Device::toString()+", "+(turnedOn?"Turned On":"Turned Off")+", "+ std::to_string(volume);
    return str;
}
