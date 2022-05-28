//
// Created by galje on 4/1/2022.
//

#include "Canvas.h"

void Canvas::addShape(Shape2D *shape2D) {
    shapes.push_back(shape2D);
}

void Canvas::print() const {
    for(auto shape : shapes){
        shape->draw();
    }
}
