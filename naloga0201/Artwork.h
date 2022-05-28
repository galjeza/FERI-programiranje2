
#ifndef NALOGA0201_ARTWORK_H
#define NALOGA0201_ARTWORK_H


#include <string>

class Artwork {
private:
    std::string title;
    std::string description;
    double price;
    int year;
public:
    Artwork();
    Artwork(std::string title,std::string description,int year, double price);
    int getYear() const;
    std::string getTitle() const;
    std::string getDescription() const;
    double getPrice() const;
    void setYear(int year);
    void setPrice(double price);
    void setDescription(std::string description);
    void setTitle(std::string title);
    bool isMoreExpensive(const Artwork * artwork) const;
    std::string toString() const;
    void print() const;

};


#endif //NALOGA0201_ARTWORK_H
