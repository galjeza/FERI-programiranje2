#include "House.h"
#include <iostream>

House::House(std::string address, HouseType type, int area, int rooms):Building(address), houseType(type), propertyArea(area), numberOfRooms(rooms)
{
}

std::string House::toString() const
{
    std::string string = getTypeString() + ", " + std::to_string(propertyArea) + ", " + std::to_string(numberOfRooms)+", "+address;
    return string;
}

void House::print() const
{
    std::cout << toString() << std::endl;
}

std::string House::getTypeString() const
{
    switch (houseType) {
        case(HouseType::SingleFamily):
            return "Single family";
        case(HouseType::Condo):
            return "Condo";
        case(HouseType::MultiFamily):
            return "Multi family";
    }
}
