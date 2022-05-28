//
// Created by galje on 4/5/2022.
//

#include <iostream>
#include "Circle.h"

Circle::Circle(ColorCode colorCode, int radius): Shape2D(colorCode),radius(radius){
}

int Circle::getSurfaceArea() const {
    int area = 3.14 *radius*radius;
    return area;
}

void Circle::draw() const {
    int N = 2*radius+1;
    int x, y;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            x = i-radius;
            y = j-radius;
            if (x*x + y*y <= radius*radius+1 )
                PrintUtility::print(Shape2D::color,"*");
            else
                std::cout<<" ";
            std::cout<<" ";
        }
        std::cout<<"\n";
    }

}

std::string Circle::toString() const {
    std::string string = std::to_string(radius)+","+ Shape2D::getColorString()+ "\n";
    return string;
}
