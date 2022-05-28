#pragma once
#include <string>
#include "Building.h"
class Flat:public Building
{
private:
	int apartements;
	int height;
public:
	Flat(std::string address, int apartements, int height);
	std::string toString() const override;
	void print() const override;

};

