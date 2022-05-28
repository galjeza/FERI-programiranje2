//
// Created by galje on 3/28/2022.
//

#ifndef NALOGA0502_SMARTHOME_H
#define NALOGA0502_SMARTHOME_H
#include "Device.h"
#include <string>
#include <vector>

class SmartHome {
private:
    std::string name;
    std::vector<Device*> devices;
public:
    explicit SmartHome(std::string name);
    ~SmartHome();
    void addDevice(Device *device);
    std::string toString() const;

};


#endif //NALOGA0502_SMARTHOME_H
