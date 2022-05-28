//
// Created by galje on 3/20/2022.
//

#include "Person.h"

Person::Person(std::string firstName, std::string lastName) :firstName(firstName),lastName(lastName){
}

std::string Person::toString() const{
    std::string str = firstName + " "+lastName;
    return str;
}

std::string Person::getName() const{
    return firstName;
}
std::string Person::getLastName() const{
    return lastName;
}
