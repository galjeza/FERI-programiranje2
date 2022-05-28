#include "City.h"
#include <iostream>
City::City(std::string name): name(name)
{
}

void City::addBuilding(Building* building)
{
	buildings.push_back(building);
}

std::string City::toString() const
{
	std::string cityString = "City name: " + name + "\n Buildings: \n ";
	for (int i = 0; i < buildings.size(); i++) {
		cityString = cityString + buildings[i]->toString() + "\n";
	}
	return cityString;
}

void City::print() const
{
	std::cout << toString() << std::endl;
}

void City::setName(std::string name)
{
	this->name = name;
}

City::~City()
{
	for (int i = 0; i < buildings.size(); i++) {
		delete buildings[i];
	}
}
