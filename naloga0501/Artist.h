//
// Created by galje on 3/19/2022.
//

#ifndef NALOGA_0401_ARTIST_H
#define NALOGA_0401_ARTIST_H


#include <string>
#include "Date.h"

class Artist {
private:
    std::string name;
    std::string biography;
    Date dateOfBirth;
public:
    Artist(std::string name,std::string biography,Date dateOfBirth);
    std::string toString() const;
    std::string getName() const;
};


#endif //NALOGA_0401_ARTIST_H
