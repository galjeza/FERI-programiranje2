#pragma once
#include "Building.h"
#include <string>
#include <vector>
class City
{
private: 
	std::string name;
	std::vector<Building*> buildings;
public:
	City(std::string name);
	void addBuilding(Building* building);
	std::string toString() const;
	void print() const;
	void setName(std::string name);
	~City();
};

