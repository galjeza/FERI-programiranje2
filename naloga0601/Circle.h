//
// Created by galje on 4/5/2022.
//

#ifndef NALOGA0601_CIRCLE_H
#define NALOGA0601_CIRCLE_H
#include "Shape2D.h"

class Circle: public Shape2D{
private:
    int radius;
public:
    Circle(ColorCode colorCode,int radius);
    int getSurfaceArea() const override;
    void draw() const override;
    std::string toString() const override;


};


#endif //NALOGA0601_CIRCLE_H
