//
// Created by galje on 4/1/2022.
//

#include "Shape2D.h"

std::string Shape2D::getColorString() const {
    std::string stringColor;
    switch (color){
        case(ColorCode::Red):
            return "Red";
        case(ColorCode::Green):
            return "Green";
        case(ColorCode::Blue):
            return "Blue";
        case(ColorCode::Default):
            return "Default";
    }
    return stringColor;
}

Shape2D::Shape2D(ColorCode color): color(color) {
}

int Shape2D::getSurfaceArea() const {
    return 0;
}

void Shape2D::draw() const {
}
