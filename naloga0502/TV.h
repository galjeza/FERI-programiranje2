//
// Created by galje on 3/28/2022.
//

#ifndef NALOGA0502_TV_H
#define NALOGA0502_TV_H
#include "Device.h"

class TV :public Device{
private:
    bool turnedOn;
    int volume;
public:
    TV(std::string id,std::string name,bool turnedOn,int volume);
    std::string toString() const;
};


#endif //NALOGA0502_TV_H
