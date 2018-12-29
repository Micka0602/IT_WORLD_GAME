#include "pch.h"
#include "Land.h"


Land::Land()
{
}

void Land::show()
{
	cout << "name : " << _name << "\t";
	cout << "pop number : " << _popNbr << "\t";
	cout << "PIB : " << _PIB << "\t";
	cout << "economy potential : " << _ecoPot << "\t";
	cout << "Super Depression : " << _SuperDep << "\t";
	cout << "Super Growth : " << _SuperGrw << "\t";
	cout << "Natural Catastroph : " << _natCat << "\t";
}


Land::~Land()
{
}
