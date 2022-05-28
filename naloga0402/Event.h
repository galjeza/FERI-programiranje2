//
// Created by galje on 3/20/2022.
//

#ifndef NALOGA0402_EVENT_H
#define NALOGA0402_EVENT_H
#include "Person.h"
#include <string>
#include <vector>
#include "Date.h"
class Event {
private:
    std::string title;
    std::string description;
    Person * presenter;
    Date date;
    std::vector<Person*> attendees;
public:
    Event(std::string title,std::string description,Person * presenter, Date date);
    void addAttendee(Person * person);
    std::string toString() const;
    std::string getTitle() const;
    std::vector<Person*> getAttendees() const;
    Date getDate() const;
};


#endif //NALOGA0402_EVENT_H
