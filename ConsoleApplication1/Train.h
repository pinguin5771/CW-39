#pragma once
#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

class Train
{
	string number;
	string departure;
	string destination;

public:
	Train();
	Train(string number, string departure, string destination);
	
	string getNumber()const;
	string getDeparture()const;
	string getDestination()const;

	void setNumber(string number);
	void setDeparture(string departure);
	void setDestination(string destination);

	void showInfo()const;
};

