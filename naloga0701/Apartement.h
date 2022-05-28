//
// Created by galje on 4/18/2022.
//

#ifndef NALOGA0701_APARTEMENT_H
#define NALOGA0701_APARTEMENT_H
#include <string>

class Apartement {
private:
    std::string address;
    int area;
public:
    Apartement() = default;
    Apartement(std::string address, int area);
    std::string toString() const;
};


#endif //NALOGA0701_APARTEMENT_H
