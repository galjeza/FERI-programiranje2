#pragma once
#include "Building.h"

enum class HouseType {
	SingleFamily,
	Condo,
	MultiFamily,
};
class House : public Building
{
private:
	HouseType houseType;
	int propertyArea;
	int numberOfRooms;
public:
	House(std::string address,HouseType type,int area, int rooms);
	std::string toString() const override;
	void print() const override;
	std::string getTypeString() const;
	
};

