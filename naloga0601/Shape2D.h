//
// Created by galje on 4/1/2022.
//

#ifndef NALOGA0601_SHAPE2D_H
#define NALOGA0601_SHAPE2D_H
#include <string>
#include "ColorCode.h";
#include "PrintUtility.h"
class Shape2D {
protected:
    ColorCode color;
public:
    Shape2D(ColorCode color);
    virtual int getSurfaceArea() const = 0;
    virtual void draw() const = 0;
    virtual std::string toString() const =0;
    std::string getColorString() const;

};


#endif //NALOGA0601_SHAPE2D_H
