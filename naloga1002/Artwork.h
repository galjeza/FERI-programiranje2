
#ifndef NALOGA0501_ARTWORK_H
#define NALOGA0501_ARTWORK_H


#include <string>
#include <memory>
#include "Artist.h"

class Artwork {
protected:
    std::string title;
    std::string description;
    std::shared_ptr<Artist> artist;
    double price;
    int year;
public:
    Artwork();
    Artwork(std::string title,std::string description,int year, double price, const std::shared_ptr<Artist>& artist);
    int getYear() const;
    std::string getTitle() const;
    std::string getDescription() const;
    void setArtist(std::shared_ptr<Artist> artist);
    std::shared_ptr<Artist> getArtist() const;
    double getPrice() const;
    void setYear(int year);
    void setPrice(double price);
    void setDescription(std::string description);
    void setTitle(std::string title);
    bool isMoreExpensive(const std::shared_ptr<Artwork>& artwork) const;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;

};


#endif //NALOGA0401_ARTWORK_H
