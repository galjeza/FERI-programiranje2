//
// Created by galje on 3/20/2022.
//

#ifndef NALOGA_0401_GALLERY_H
#define NALOGA_0401_GALLERY_H


#include <string>
#include <vector>
#include "Artwork.h"
class Gallery {
private:
    std::string name;
    std::vector<Artwork*> artworks;
public:
    Gallery(std::string name);
    void addArtworks(Artwork * artwork);
    void printArtworks() const;
    std::string toString() const ;
    void removeArtwork(Artwork * artwork);
    std::vector<Artwork*> getArtworksBetweenYear(unsigned int startYear,unsigned int endYear) const;
};

#endif //NALOGA_0401_GALLERY_H
