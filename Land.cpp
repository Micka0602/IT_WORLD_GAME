#include "Land.h"

Land::Land()
{}

Land::Land(string name, long int popNb, double pib, double ecoPot, double superDep, double superGrw, double natCat)
{
    _name = name;
    _popNbr = popNb;
    _PIB = pib;
    _ecoPot = ecoPot;
    _SuperDep = superDep;
    _SuperGrw = superGrw;
    _natCat = natCat;
}

void Land::show(int landsNumber)
{
    cout << "[Land " << landsNumber + 1 << "]" << endl;
	cout << "name :\t" << _name << endl;
	cout << "pop number :\t" << _popNbr << endl;
	cout << "PIB : " << _PIB << "\t";
	cout << "economy potential :\t" << _ecoPot << endl;
	cout << "Super Depression :\t" << _SuperDep << endl;
	cout << "Super Growth :\t" << _SuperGrw << endl;
	cout << "Natural Catastroph :\t" << _natCat << endl << endl;
}

Land::~Land()
{
    //dtor
}
