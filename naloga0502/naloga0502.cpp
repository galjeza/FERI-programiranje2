#include <iostream>
#include "SmartHome.h"
#include "Device.h"
#include "Phone.h"
#include "TV.h"
#include "Light.h"
#include "VentilationSystem.h"
int main() {
    SmartHome smartHome("Gal's Smar Home");
    Device * smartTv = new TV("8d45a630s2","Samsung Smart TV",true,23);
    Device * light = new Light("193rz2764i6","Bathroom Light",false);
    smartHome.addDevice(new Phone("927a4as56","iPhone 7",73));
    smartHome.addDevice(smartTv);
    smartHome.addDevice(light);
    smartHome.addDevice(new Device("37a3r46e1","unknown device"));
    smartHome.addDevice(new VentilationSystem("a4s1d23","Vent system v2",7,22));
   // delete light;

    std::cout<<smartHome.toString();


    return 0;
}
