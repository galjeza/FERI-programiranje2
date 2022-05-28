#include <string>
#ifndef NALOGA0202_WATERINTAKE_H
#define NALOGA0202_WATERINTAKE_H


class WaterIntake {
unsigned int day;
unsigned int month;
unsigned int year;
float quantity;
public:

    WaterIntake(unsigned int day, unsigned int month,unsigned int year,float quantity);

    unsigned int getDay() const;
    unsigned int getMonth() const;
    unsigned int getYear() const;
    float getQuantity() const;
    void setQuantity(float quantity);
    // metode
    std::string toString() const;
    void addQuantity(float qty);

};


#endif //NALOGA0202_WATERINTAKE_H
