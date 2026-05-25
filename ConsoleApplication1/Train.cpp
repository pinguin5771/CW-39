#include "Train.h"

Train::Train()
{
    number = "undefined";
    departure = "undefined";
    destination = "undefined";
}

Train::Train(string number, string departure, string destination)
{
    this->number = number;
    this->departure = departure;
    this->destination = destination;
}

string Train::getNumber() const
{
    return number;
}

string Train::getDeparture() const
{
    return departure;
}

string Train::getDestination() const
{
    return destination;
}

void Train::setNumber(string number)
{
    this->number = number;
}

void Train::setDeparture(string departure)
{
    this->departure = departure;
}

void Train::setDestination(string destination)
{
    this->destination = destination;
}

bool Train::operator<(const Train& obj) const&
{
    if (this->departure < obj.departure) return true;
    else if (this->departure == obj.departure) return this->number < obj.number;
    else return false;
}

void Train::showInfo() const
{
    cout << number << " " << departure << " " << destination << endl;
}
