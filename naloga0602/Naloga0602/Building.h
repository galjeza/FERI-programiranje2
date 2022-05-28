#pragma once
#include <string>

class Building
{
protected:
	std::string address;
public:
	Building(std::string address);
	virtual void print() const = 0;
	virtual std::string toString() const = 0;
};

