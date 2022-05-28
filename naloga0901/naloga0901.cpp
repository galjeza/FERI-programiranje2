#include <iostream>
#include "Date.h"
#include "SmartPointer.h"
#include <memory>

int main() {
    SmartPointer<Date> date1(new Date(31, 1, 2020));
    SmartPointer<Date> date2(new Date(1, 1, 2019));

    //Testiranje == operatorja
    bool sameDate = *date1 == *date2;
    std::cout << sameDate << std::endl;

    //Testiranje operatorja ++
    (*date1)++;
    ++(*date1);
    std::cout << *date1 << std::endl;

    std::shared_ptr<Date> date3(new Date(2, 3, 2002));
    std::cout << *date3;


    return 0;
}
