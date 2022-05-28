//
// Created by galje on 4/1/2022.
//

#include "Square.h"
#include <iostream>

Square::Square(ColorCode color, int height) : Shape2D(color),height(height) {

}

int Square::getSurfaceArea() const {
    return height*height;
}

std::string Square::toString() const {
    std::string stringSquare = std::to_string(height)+", "+getColorString();
    return stringSquare;
}

void Square::draw() const {
    for(int i=0;i<height;i++){
        PrintUtility::print(color,height);
    }
    std::cout<<std::endl;
}
