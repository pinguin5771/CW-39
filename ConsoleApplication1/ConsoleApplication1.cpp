#include "Train.h"
#include <set>
using std::set;



int main()
{
	set<Train> Kyiv;

	Kyiv.insert(Train("123", "12:00", "Lviv"));
	Kyiv.insert(Train("546", "09:00", "Kharkiv"));
	Kyiv.insert(Train("342", "17:30", "Odessa"));
	Kyiv.insert(Train("222", "23:20", "Mykolaiv"));
	Kyiv.insert(Train("111", "12:00", "Poltava"));


	set<Train>::iterator p;
	for (p = Kyiv.begin(); p != Kyiv.end(); p++)
	{
		p->showInfo();
	}




	return 0;
}