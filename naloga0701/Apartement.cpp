//
// Created by galje on 4/18/2022.
//

#include "Apartement.h"


Apartement::Apartement(std::string address, int area):address(address),area(area){
}

std::string Apartement::toString() const {
    std::string str = address + ", " +std::to_string(area)+" square metres";
    return str;
}
