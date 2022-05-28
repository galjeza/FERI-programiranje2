//
// Created by galje on 3/20/2022.
//

#ifndef NALOGA_0401_GALLERY_H
#define NALOGA_0401_GALLERY_H


#include <string>
#include <vector>
#include "Artwork.h"
#include "PrintIfPainting.h"

class Gallery {
private:
    std::string name;
    std::vector<Artwork*> artworks;
public:
    Gallery(std::string name);
    void addArtworks(Artwork * artwork);
    //void printArtworks() const;
    std::string toString() const ;
    void removeArtwork(Artwork * artwork);
    std::vector<Artwork*> getArtworksBetweenYear(unsigned int startYear,unsigned int endYear) const;
    void sort(bool (*c)(Artwork*, Artwork*));
    Artwork* find(bool (*c)(Artwork*));
    std::vector<Artwork*> findAll(bool (*c)(Artwork*));
    void printArtworks(PrintIfPainting i) const;

};
bool ascendingYear(Artwork* i, Artwork* j);
bool descendingYear(Artwork* i, Artwork* j);
bool ascendingPrice(Artwork* i, Artwork* j);

#endif //NALOGA_0401_GALLERY_H
