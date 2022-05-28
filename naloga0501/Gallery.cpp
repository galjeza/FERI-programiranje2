//
// Created by galje on 3/20/2022.
//

#include <iostream>
#include "Gallery.h"
#include<string.h>

Gallery::Gallery(std::string name):name(name){
}

void Gallery::addArtworks(Artwork *artwork) {
    artworks.push_back(artwork);
}

void Gallery::printArtworks() const{
    for(int i=0;i<artworks.size();i++){
        std::cout<<artworks[i]->toString()<<std::endl <<std::endl;
    }
}

std::string Gallery::toString() const {
    std::string galleryString = name+",";
    for(int i=0;i<artworks.size();i++){
        galleryString = galleryString+"\n"+artworks[i]->toString();
    }
    return galleryString;
}

void Gallery::removeArtwork(Artwork *artwork) {
    for(std::vector<Artwork*>::iterator it=artworks.begin();it!=artworks.end();it++){
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


