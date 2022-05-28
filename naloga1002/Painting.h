//
// Created by galje on 3/28/2022.
//

#ifndef NALOGA_0501_PAINTING_H
#define NALOGA_0501_PAINTING_H
#include "Artwork.h"
enum class PaintingTechnique {Oil,Acrylic,Graphite};

class Painting :public Artwork{
private:
    PaintingTechnique technique;
public:
    Painting(PaintingTechnique technique,std::string title,std::string description,int year, double price,const std::shared_ptr<Artist>& artist);
    std::string toString() const override;
    void print() const override;


};


#endif //NALOGA_0501_PAINTING_H
