//
// Created by galje on 4/1/2022.
//

#ifndef NALOGA0601_PRINTUTILITY_H
#define NALOGA0601_PRINTUTILITY_H
#include "ColorCode.h"

class PrintUtility {
private:
    PrintUtility() = default;
public:
    static void print(const ColorCode &color, const std::string& str);
    static void print(const ColorCode &color, unsigned int n);
};



#endif //NALOGA0601_PRINTUTILITY_H
