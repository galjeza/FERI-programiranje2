//
// Created by galje on 3/19/2022.
//

#include "Artist.h"

#include <utility>


Artist::Artist(std::string name, std::string biography, Date dateOfBirth) :name(std::move(name)),biography(std::move(biography)), dateOfBirth(dateOfBirth){
}

std::string Artist::toString() const{
    std::string string{name+"\n"+biography+"\n"+dateOfBirth.toString()};
    return string;

}
std::string Artist::getName() const {
    return name;
}

