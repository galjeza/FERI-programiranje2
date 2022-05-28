//
// Created by galje on 3/29/2022.
//

#include <iostream>
#include "Sculpture.h"

Sculpture::Sculpture(std::string title, std::string description, int year, double price, std::shared_ptr<Artist> artist, float weight,
                     Material material):Artwork(title,description,year,price,artist),weight(weight),material(material) {
}

std::string Sculpture::toString() const {
    std::string str = Artwork::toString() + ", "+std::to_string(weight)+", ";
    std::string materialString;
    switch(material){
        case(Material::Clay):
            materialString = "Clay";
            break;
        case(Material::Metal):
            materialString = "Metal";
            break;
        case(Material::Stone):
            materialString="Stone";
            break;
        case(Material::Wood):
            materialString="Wood";
            break;
    }
    str += materialString;
    return str;
}

void Sculpture::print() const {
    std::cout<<toString()<<std::endl;
}


