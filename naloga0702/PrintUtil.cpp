//
// Created by galje on 4/19/2022.
//
#include <string>
#include <iostream>
#include "PrintUtil.h"


void PrintUtility::print(const ColorCode &color, const std::string& str) {
    std::cout << "\033[" << (int)color << "m" << str << "\033[0m";
}

void PrintUtility::print(const ColorCode &color, unsigned int n) {
    for(int i = 0; i < n; i++)
        print(color, "*");
    std::cout<<std::endl;
}
#include "PrintUtil.h"
