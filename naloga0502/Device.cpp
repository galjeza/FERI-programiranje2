//
// Created by galje on 3/28/2022.
//

#include "Device.h"

#include <utility>

Device::Device(std::string id, std::string name) :id(std::move(id)),name(std::move(name)){
}

std::string Device::toString() const {
    std::string str = id+", "+name;
    return str;
}


