#include "Flat.h"
#include <iostream>
Flat::Flat(std::string address, int apartements, int height):Building(address),apartements(apartements),height(height)
{
}

std::string Flat::toString() const
{
	return  std::to_string(apartements) + ", " + std::to_string(height) + " m, "+address;
}

void Flat::print() const
{
	std::cout << toString() << std::endl;
}
