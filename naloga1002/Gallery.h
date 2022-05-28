//
// Created by galje on 3/20/2022.
//

#ifndef NALOGA_0401_GALLERY_H
#define NALOGA_0401_GALLERY_H


#include <string>
#include <vector>
#include <memory>
#include <functional>
#include "Artwork.h"
#include "PrintIfPainting.h"

class Gallery {
private:
    std::string name;
    std::vector<std::shared_ptr<Artwork>> artworks;
public:
    Gallery(std::string name);
    void addArtworks(const std::shared_ptr<Artwork>& artwork);
    void printArtworks() const;
    std::string toString() const ;
    void removeArtwork(const std::shared_ptr<Artwork>& artwork) ;
    std::vector<std::shared_ptr<Artwork>> getArtworksBetweenYear(unsigned int startYear,unsigned int endYear) const;
    void sort(bool (*c)(std::shared_ptr<Artwork>, std::shared_ptr<Artwork>));
    std::shared_ptr<Artwork> find(std::function<bool(std::shared_ptr<Artwork>)> c);
    std::vector<std::shared_ptr<Artwork>> findAll(const std::function<bool(std::shared_ptr<Artwork>)>& c);
    void printArtworks(PrintIfPainting i) const;
    void filterOut(std::function<bool(std::shared_ptr<Artwork>)> c);

};




#endif //NALOGA_0401_GALLERY_H
