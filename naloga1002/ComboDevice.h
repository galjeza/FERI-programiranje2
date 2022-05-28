//
// Created by galje on 5/24/2022.
//

#ifndef NALOGA_0501_COMBODEVICE_H
#define NALOGA_0501_COMBODEVICE_H
#include "Copier.h"
#include "Scanner.h"

class ComboDevice:public Copier, public Scanner{
public:
    ComboDevice(int maxSpeed, int dotsPerInch): Copier(maxSpeed),Scanner(dotsPerInch){};
    void print() const{
        std::cout<<"Max printing speed: "<<Copier::maxPrintSpeed<<", DPI:"<<Scanner::dots_per_inch<<std::endl;
    }
};


#endif //NALOGA_0501_COMBODEVICE_H
