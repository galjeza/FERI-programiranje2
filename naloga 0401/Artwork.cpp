#include <iostream>
#include <sstream>
#include <utility>
#include "Artwork.h"

Artwork::Artwork() : title(""), description(""), year(0), price(0.00),artist(nullptr) {
}



Artwork::Artwork(std::string title, std::string description, int year, double price,Artist * artist) {
    this->title = std::move(title);
    this->description = std::move(description);
    this->price = price;
    this->year = year;
    this->artist = artist;
}

std::string Artwork::getDescription() const{
    return description;
}

std::string Artwork::getTitle() const{
    return title;
}

double Artwork::getPrice() const {
    return price;
}

int Artwork::getYear() const {
    return year;
}

void Artwork::setDescription(std::string desc) {
    this->description = std::move(desc);
}

void Artwork::setYear(int y) {
    this->year = y;
}

void Artwork::setPrice(double p) {
    this->price = p;
}

void Artwork::setTitle(std::string t) {
    this->title = std::move(t);
}

void Artwork::print() const {
    std::cout<<toString()<<std::endl;
}

std::string Artwork::toString() const{
    std::stringstream ss;
    ss << title << ", " << description << ", " << year << ", " << price<<","<<artist->getName();
    std::string info = ss.str();
    return info;
}

bool Artwork::isMoreExpensive(const Artwork *artwork) const {
    if (price > artwork->price) {
        return true;
    }
    return false;

}

void Artwork::setArtist(Artist *artist) {
    this->artist = artist;
}

Artist * Artwork::getArtist() const {
    return artist;
}
