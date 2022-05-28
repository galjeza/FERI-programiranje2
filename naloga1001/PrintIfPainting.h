//
// Created by galje on 5/23/2022.
//

#ifndef NALOGA_0501_PRINTIFPAINTING_H
#define NALOGA_0501_PRINTIFPAINTING_H

#include <iostream>
#include "Artwork.h"
#include "Painting.h"

class PrintIfPainting {
public:
    void operator()(Artwork* e){
        if(dynamic_cast<Painting*>(e) != nullptr)
            e->print();
    }
};


#endif //NALOGA_0501_PRINTIFPAINTING_H
