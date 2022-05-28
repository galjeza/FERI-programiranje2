//
// Created by galje on 3/20/2022.
//

#include <iostream>
#include <utility>
#include "Gallery.h"
#include <algorithm>

Gallery::Gallery(std::string name):name(std::move(name)){
}

void Gallery::addArtworks(const std::shared_ptr<Artwork>& artwork) {
    artworks.push_back(artwork);
}


std::string Gallery::toString() const {
    std::string galleryString = name+",";
    for(const auto& artwork : artworks){
        galleryString = galleryString+"\n"+artwork->toString();
    }
    return galleryString;
}

void Gallery::removeArtwork(const std::shared_ptr<Artwork>& artwork) {
    for(auto it=artworks.begin();it!=artworks.end();it++){
        if(artwork->toString()==(*it)->toString()){
            artworks.erase(it);
            return;
        }
    }
}

std::vector<std::shared_ptr<Artwork>> Gallery::getArtworksBetweenYear(unsigned int startYear, unsigned int endYear) const {
    std::vector<std::shared_ptr<Artwork>> result;
    for(int i=0;i<artworks.size();i++){
        if((artworks[i]->getYear()>=startYear) && (artworks[i]->getYear()<=endYear)){
            result.push_back(artworks[i]);
        }
    }
    return result;
}

void Gallery::sort(bool (*c)(std::shared_ptr<Artwork>, std::shared_ptr<Artwork> )) {
    for (int i = 0; i < artworks.size()-1; ++i)
        for (int j = 0; j < artworks.size()-i-1; ++j)
            if (!c(artworks[j], artworks[j+1]))
                std::swap(artworks[j], artworks[j+1]);
}

std::shared_ptr<Artwork> Gallery::find(std::function<bool(std::shared_ptr<Artwork>)> c) {
    auto it = std::find_if (artworks.begin(), artworks.end(), c);
    if(c(*it)){
        return *it;
    }return nullptr;

}

void Gallery::printArtworks(PrintIfPainting i) const {
    for_each (artworks.begin(), artworks.end(), i);
}

void Gallery::filterOut(std::function<bool(std::shared_ptr<Artwork>)> c){
    for(int i=0;i<artworks.size();i++){
        if(c(artworks[i])){
            artworks.erase(artworks.begin()+i);
            i--;
        }
    }
}

void Gallery::printArtworks() const {
    std::cout<<Gallery::toString()<<std::endl;
}

std::vector<std::shared_ptr<Artwork>> Gallery::findAll(const std::function<bool(std::shared_ptr<Artwork>)>& c) {
    std::vector<std::shared_ptr<Artwork>> results;
    for(auto & artwork : artworks){
        if(c(artwork)){
            results.push_back(artwork);
        }
    }
    return results;
}




