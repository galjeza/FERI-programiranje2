//
// Created by galje on 3/20/2022.
//

#include <algorithm>
#include <iostream>
#include "Conference.h"

Conference::Conference(std::string title, Date startDate, Date endDate):title(title), startDate(startDate), endDate(endDate) {
}

bool Conference::addEvent(const Event &event) {
    for(int i=0;i<events.size();i++){
        if(events[i].getDate().toString()==event.getDate().toString()){
            std::cout<<"Event at this date already exists."<<std::endl;
            return false;
        }
    }
    events.push_back(event);
    return true;
}

std::string Conference::toString() const {
    std::string str = title+", "+startDate.toString()+"-"+endDate.toString()+"\n";
    for(int i=0;i<events.size();i++){
        str += events[i].getTitle() +", ";
    }
    return str;
}

std::vector<Person *> Conference::getAllAttendees() const {
    std::vector<Person*> result;
    for(int i=0;i<events.size();i++){
        for(int j=0;j<events[i].getAttendees().size();j++) {
            if(std::find(result.begin(),result.end(),events[i].getAttendees()[j])==result.end()){
                result.push_back(events[i].getAttendees()[j]);
            }
        }
    }
    return result;
}
