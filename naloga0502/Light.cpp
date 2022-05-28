//
// Created by galje on 3/28/2022.
//

#include "Light.h"
#include <utility>

Light::Light(std::string id, std::string name, bool turnedOn) :Device(std::move(id),std::move(name)),turnedOn(turnedOn){
}

std::string Light::toString() const {
    std::string str = Device::toString()+", "+(turnedOn?"Turned On":"Turned Off");
    return str;
}
