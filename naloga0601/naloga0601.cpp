#include <iostream>
#include "Canvas.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
int main() {
    using std::operator""s;
    system(("chcp "s + std::to_string(65001)).c_str());

    Canvas c;
    c.addShape(new Rectangle(ColorCode(ColorCode::Green), 5, 2));
    c.addShape(new Rectangle(ColorCode(ColorCode::Blue), 10, 5));
    c.addShape(new Square(ColorCode(ColorCode::Red), 5));
    c.addShape(new Square(ColorCode(ColorCode::Default), 10));
    c.addShape(new Square(ColorCode(ColorCode::Green), 10));
    c.addShape(new Circle(ColorCode(ColorCode::Red),5));
    c.print();



    return 0;
}
