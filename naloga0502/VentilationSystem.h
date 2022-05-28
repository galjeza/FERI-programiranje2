//
// Created by galje on 3/29/2022.
//

#ifndef NALOGA0502_VENTILATIONSYSTEM_H
#define NALOGA0502_VENTILATIONSYSTEM_H
#include "Device.h"

class VentilationSystem:public Device {
private:
    int startHour;
    int endHour;
public:
    VentilationSystem(std::string id,std::string name,int startHour, int endHour);
    std::string toString() const override;
};


#endif //NALOGA0502_VENTILATIONSYSTEM_H
