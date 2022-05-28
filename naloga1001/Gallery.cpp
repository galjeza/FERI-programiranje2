//
// Created by galje on 3/20/2022.
//

#include <iostream>
#include <utility>
#include "Gallery.h"
#include<string.h>
#include <algorithm>

Gallery::Gallery(std::string name):name(std::move(name)){
}

void Gallery::addArtworks(Artwork *artwork) {
    artworks.push_back(artwork);
}


std::string Gallery::toString() const {
    std::string galleryString = name+",";
    for(auto artwork : artworks){
        galleryString = galleryString+"\n"+artwork->toString();
    }
    return galleryString;
}

void Gallery::removeArtwork(Artwork *artwork) {
    for(auto it=artworks.begin();it!=artworks.end();it++){
        if(artwork->toString()==(*it)->toString()){
            artworks.erase(it);
            return;
        }
    }
}

std::vector<Artwork *> Gallery::getArtworksBetweenYear(unsigned int startYear, unsigned int endYear) const {
    std::vector<Artwork*> result;
    for(int i=0;i<artworks.size();i++){
        if((artworks[i]->getYear()>=startYear) && (artworks[i]->getYear()<=endYear)){
            result.push_back(artworks[i]);
        }
    }
    return result;
}

void Gallery::sort(bool (*c)(Artwork *, Artwork *)) {
    for (int i = 0; i < artworks.size()-1; ++i)
        for (int j = 0; j < artworks.size()-i-1; ++j)
            if (!c(artworks[j], artworks[j+1]))
                std::swap(artworks[j], artworks[j+1]);
}

Artwork *Gallery::find(bool (*c)(Artwork *)) {
    auto it = std::find_if (artworks.begin(), artworks.end(), c);
    if(it != artworks.end()){
        return *it;
    }return nullptr;
}

void Gallery::printArtworks(PrintIfPainting i) const {
    for_each (artworks.begin(), artworks.end(), i);

}

std::vector<Artwork *> Gallery::findAll(bool (*c)(Artwork *)) {
    std::vector<Artwork *> result;
    for(auto & artwork : artworks){
        if(c(artwork)){
            result.push_back(artwork);
        }
    }
    return result;
}

bool ascendingYear(Artwork* i, Artwork* j){
    return i->getYear() <= j->getYear();
}

bool descendingYear(Artwork* i, Artwork* j){
    return i->getYear() >= j->getYear();
}

bool ascendingPrice(Artwork* i, Artwork* j){
    return i->getPrice() <= j->getPrice();

}


