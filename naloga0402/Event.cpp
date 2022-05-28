//
// Created by galje on 3/20/2022.
//

#include "Event.h"

Event::Event(std::string title, std::string description, Person *presenter, Date date):
title(title),description(description),presenter(presenter),date(date) {
}

void Event::addAttendee(Person *person) {
    attendees.push_back(person);
}

std::string Event::toString() const{
    std::string string = title+", "+description+","+presenter->toString()+"\n"+"Attendees: ";
    for(int i=0;i<attendees.size();i++){
        string += attendees[i]->toString();
        string += ", ";
    }
    return string;

}

std::string Event::getTitle() const {
   return title;
}

std::vector<Person *> Event::getAttendees() const {
    return attendees;
}

Date Event::getDate() const {
    return date;
}
