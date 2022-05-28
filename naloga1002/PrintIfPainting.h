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
    void operator()(const std::shared_ptr<Artwork>& e){
        if(std::dynamic_pointer_cast<std::shared_ptr<Painting>>(e))
            e->print();
    }
};


#endif //NALOGA_0501_PRINTIFPAINTING_H
