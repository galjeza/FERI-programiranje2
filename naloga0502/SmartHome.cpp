//
// Created by galje on 3/28/2022.
//

#include "SmartHome.h"

#include <utility>

SmartHome::SmartHome(std::string name) :name(std::move(name)){
}

void SmartHome::addDevice(Device *device) {
    devices.push_back(device);

}

std::string SmartHome::toString() const {
    std::string stringHome = name+"\n"+"Devices : \n";
    for(auto device : devices){
        stringHome = stringHome + device->toString() +", \n";
    }
    return stringHome;
}

SmartHome::~SmartHome() {
    for(auto & device : devices){
        delete device;
    }
    devices.clear();
}
