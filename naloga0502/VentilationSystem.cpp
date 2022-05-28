//
// Created by galje on 3/29/2022.
//

#include "VentilationSystem.h"

VentilationSystem::VentilationSystem(std::string id, std::string name, int startHour, int endHour) : Device(id,name),startHour(startHour),endHour(endHour){
}

std::string VentilationSystem::toString() const {
    std::string str =  Device::toString() + ", "+std::to_string(startHour)+", "+ std::to_string(endHour);
    return str;
}

