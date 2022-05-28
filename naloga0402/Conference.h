//
// Created by galje on 3/20/2022.
//

#ifndef NALOGA0402_CONFERENCE_H
#define NALOGA0402_CONFERENCE_H
#include <string>
#include "Date.h"
#include "Event.h"
#include "Person.h"
class Conference {
private:
    std::string title;
    Date startDate,endDate;
    std::vector<Event> events;
public:
    Conference(std::string title, Date startDate,Date endDate);
    bool addEvent(const Event & event);
    std::string toString() const;
    std::vector<Person*> getAllAttendees() const;

};


#endif //NALOGA0402_CONFERENCE_H
