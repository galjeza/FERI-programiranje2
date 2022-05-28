//
// Created by galje on 4/18/2022.
//

#include "Monitor.h"


Monitor::Monitor(int r, int p): refreshRate(r), powerConsumtion(p){
}

std::string Monitor::toString() const {
    std::string str =  std::to_string(refreshRate)+" hz, "+std::to_string(powerConsumtion)+" mw";
    return str;
}
