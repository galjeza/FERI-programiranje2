//
// Created by galje on 4/1/2022.
//

#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(ColorCode colorCode, int width, int height) : Shape2D(colorCode), width(width), height(height) {
}

int Rectangle::getSurfaceArea() const {
    return width * height;
}

void Rectangle::draw() const {
    for (int j = 0; j < height; j++) {
        PrintUtility::print(color, width);

    }
    std::cout<<std::endl;
}

std::string Rectangle::toString() const {

    std::string str = std::to_string(height) + ", " + std::to_string(width) + ", " + getColorString()+ "\n";
    return str;
}
