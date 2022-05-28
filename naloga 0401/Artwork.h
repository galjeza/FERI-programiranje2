
#ifndef NALOGA0401_ARTWORK_H
#define NALOGA0401_ARTWORK_H


#include <string>
#include "Artist.h"

class Artwork {
private:
    std::string title;
    std::string description;
    Artist * artist;
    double price;
    int year;
public:
    Artwork();
    Artwork(std::string title,std::string description,int year, double price,Artist * artist);
    int getYear() const;
    std::string getTitle() const;
    std::string getDescription() const;
    void setArtist(Artist * artist);
    Artist * getArtist() const;
    double getPrice() const;
    void setYear(int year);
    void setPrice(double price);
    void setDescription(std::string description);
    void setTitle(std::string title);
    bool isMoreExpensive(const Artwork * artwork) const;
    std::string toString() const;
    void print() const;

};


#endif //NALOGA0401_ARTWORK_H
