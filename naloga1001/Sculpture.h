//
// Created by galje on 3/29/2022.
//
#ifndef NALOGA_0501_SCULPTURE_H
#define NALOGA_0501_SCULPTURE_H
#include "Artwork.h"

enum class Material {Wood,Stone,Metal,Clay};

class Sculpture:public Artwork {
private:
    float weight;
    Material material;
public:
    Sculpture(std::string title,std::string description,int year, double price,Artist * artist,float weight ,Material material);
    std::string toString() const override;
    void print() const override;
};


#endif //NALOGA_0501_SCULPTURE_H
