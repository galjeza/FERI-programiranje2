//
// Created by galje on 4/1/2022.
//

#ifndef NALOGA0601_RECTANGLE_H
#define NALOGA0601_RECTANGLE_H
#include <string>
#include "Shape2D.h"
class Rectangle : public Shape2D{
private:
    int height;
    int width;
public:
    Rectangle(ColorCode colorCode, int width, int height);
    int getSurfaceArea() const override;
    void draw() const override;
    std::string toString() const override;

};

#endif //NALOGA0601_RECTANGLE_H
