//
// Created by galje on 4/18/2022.
//

#ifndef NALOGA0701_MONITOR_H
#define NALOGA0701_MONITOR_H
#include <string>

class Monitor {
private:

    int refreshRate;
    int powerConsumtion;
public:
    Monitor() = default;
    Monitor(int r, int p);
    std::string toString() const;


};


#endif //NALOGA0701_MONITOR_H
