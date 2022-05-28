//
// Created by galje on 3/28/2022.
//

#ifndef NALOGA0502_PHONE_H
#define NALOGA0502_PHONE_H
#include "Device.h"

class Phone:public Device {
private:
    int battery;
public:
    Phone(std::string id, std::string name,int battery);
    std::string toString() const;

};


#endif //NALOGA0502_PHONE_H
