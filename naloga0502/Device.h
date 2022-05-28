//
// Created by galje on 3/28/2022.
//

#ifndef NALOGA0502_DEVICE_H
#define NALOGA0502_DEVICE_H


#include <string>

class Device {
protected:
    std::string id;
    std::string name;
public:
    Device(std::string id,std::string name);
    virtual std::string toString() const;

};


#endif //NALOGA0502_DEVICE_H
