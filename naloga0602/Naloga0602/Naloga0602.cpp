#include <iostream>
#include "City.h"
#include "Building.h"
#include "House.h"
#include "Flat.h"

// Nadrazred Worker ima abstraktno metodo Work in virtualno metodo toString
// Primeri podrazredov: Teacher, Student, Construction Worker

void menu() {
	std::string menuString = "1. Rename the city \n2. Add a house to the city \n3. Add a flat to the city \n4. Print city \n5.Exit";
	std::cout << menuString << std::endl;
}
int main()
{ 
	bool running = true;
	int selection,n,m,k;
	HouseType type = HouseType::SingleFamily;
	std::string s;
	City city("Maribor");
	do {
		menu();
		std::cin >> selection;
		switch (selection) {
		case(1):
			std::cout << "Enter new city name:";
			std::cin >> s;
			city.setName(s);
			std::cout << "City name changed to: " << s << std::endl;
			break;
		case(2):
			std::cout << "Chose the type of the house: \n1.Single-family \n2.Condo \n3.Multi-family \n";
			std::cin >> k;
			switch (k){ 
				case(1):
					type = HouseType::SingleFamily;
					break;
				case(2):
					type = HouseType::Condo;
					break;
				case(3):
					type = HouseType::MultiFamily;
					break;
			}
			std::cout<< "\nEnter the address: ";
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::getline(std::cin, s, '\n');
			std::cin.clear();
			std::cout << "\nEnter the number of rooms:";
			std::cin >> n;
			std::cout << "\nEnter the area of property in squared meters:";
			std::cin >> m;
			city.addBuilding(new House(s, type, m, n));
			std::cout << "\nNew house added to the city." << std::endl;
			break;
		case(3):
			std::cout << "\nEnter the address: ";
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::getline(std::cin, s, '\n');
			std::cin.clear();
			std::cout << "\nEnter the height of the flat:";
			std::cin >> k;
			std::cout << "\nEnter the number of apartements in the flat:";
			std::cin >> m;
			city.addBuilding(new Flat(s, m, k));
			std::cout << "\nNew flat added to the city.\n";
			break;
		case(4):
			city.print();
			break;
		case(5):
			running = false;
			break;

		}
	} while (running);
	return 0;
}
