//
// Created by galje on 4/1/2022.
//

#ifndef NALOGA0601_SQUARE_H
#define NALOGA0601_SQUARE_H
#include <string>
#include "Shape2D.h"
class Square : public Shape2D{
private:
    int height;

public:
    Square(ColorCode color, int height);
    int getSurfaceArea() const override;
    void draw() const override;
    std::string toString() const override;
};

#endif //NALOGA0601_SQUARE_H
