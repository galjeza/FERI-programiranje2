//
// Created by galje on 3/28/2022.
//
#include <sstream>
#include <iostream>
#include <utility>
#include "Painting.h"

Painting::Painting(PaintingTechnique technique, std::string title, std::string description, int year, double price,
                   const std::shared_ptr<Artist>& artist) : Artwork(std::move(title), std::move(description), year, price, artist), technique(technique) {

}


std::string Painting::toString() const {
    std::stringstream ss;
    std::string stringTechnique;
    switch (technique) {
        case PaintingTechnique::Oil:
            stringTechnique = "Oil";
            break;
        case PaintingTechnique::Acrylic:
            stringTechnique = "Acrylic";
            break;
        case PaintingTechnique::Graphite:
            stringTechnique = "Graphite";
    };
    ss << Artwork::toString() << "," << stringTechnique;
    return ss.str();
}

void Painting::print() const {
    std::cout << toString()<<std::endl;
};
