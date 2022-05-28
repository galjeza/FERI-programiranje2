//
// Created by galje on 4/19/2022.
//

#ifndef NALOGA0702_PRINTUTIL_H
#define NALOGA0702_PRINTUTIL_H

#include "ColorCode.h"

class PrintUtility {
private:
    PrintUtility() = default;
public:
    static void print(const ColorCode &color, const std::string& str);
    static void print(const ColorCode &color, unsigned int n);
};


#endif //NALOGA0702_PRINTUTIL_H
