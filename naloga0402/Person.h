//
// Created by galje on 3/20/2022.
//

#ifndef NALOGA0402_PERSON_H
#define NALOGA0402_PERSON_H
#include <string>

class Person {
private:
    std::string firstName;
    std::string lastName;
public:
    Person(std::string firstName, std::string lastName);
    std::string toString() const;
    std::string getName() const;
    std::string getLastName() const;
};


#endif //NALOGA0402_PERSON_H
