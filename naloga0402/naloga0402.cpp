#include <iostream>
#include "Conference.h"

int main() {
    Person * cybersecurityPresenter = new Person("Gal","Jeza");
    Person * workBalancePresenter = new Person("Matej","Arnejc");
    Person * foodPresenter = new Person("Matija","Bobek");
    Person * attendee1 = new Person("Matic","Lukezic");
    Person * attendee2 = new Person("Anej","Miklosic");
    Person * attendee3 = new Person("Nika","Plazar");
    Person * attendee4 = new Person("Teja","Bezjak");
    Person * attendee5 = new Person("Darko","Bezjak");
    Person * attendee6 = new Person("Anton","Arh");

    Event cyberSecurityEvent("Cybersecurity","How to aproach cybersecurity in a big company.",cybersecurityPresenter,Date(10,9,2023));
    cyberSecurityEvent.addAttendee(attendee1);
    cyberSecurityEvent.addAttendee(attendee2);
    cyberSecurityEvent.addAttendee(attendee3);

    Event workBalanceEvent("Work life balance","How to balance life and work.",workBalancePresenter,Date(13,9,2023));
    workBalanceEvent.addAttendee(attendee4);
    workBalanceEvent.addAttendee(attendee5);
    workBalanceEvent.addAttendee(attendee6);

    Event foodEvent("Importance of food","What to eat to feel better.",foodPresenter,Date(13,9,2023));
    foodEvent.addAttendee(attendee1);
    foodEvent.addAttendee(cybersecurityPresenter);
    foodEvent.addAttendee(attendee6);


    Conference conference("IT Conference",Date(10,9,2023),Date(13,9,2023));
    conference.addEvent(cyberSecurityEvent);
    conference.addEvent(foodEvent);
    conference.addEvent(workBalanceEvent);


    std::cout<<conference.toString()<<std::endl<<std::endl;
    std::cout<<foodEvent.toString()<<std::endl<<std::endl;
    std::cout<<cyberSecurityEvent.toString()<<std::endl<<std::endl;
    std::cout<<workBalanceEvent.toString()<<std::endl<<std::endl;

    std::vector<Person*> allAttendees = conference.getAllAttendees();
    std::cout<<"All attendees:"<<std::endl;
    for(int i=0;i<allAttendees.size();i++){
        std::cout<<allAttendees[i]->getName()<<" "<<allAttendees[i]->getLastName()<<std::endl;
    }

    delete attendee1;
    delete attendee2;
    delete attendee3;
    delete attendee4;
    delete attendee5;
    delete attendee6;
    delete cybersecurityPresenter;
    delete workBalancePresenter;
    delete foodPresenter;
    return 0;
}
