#pragma once
#include "World.h"
using namespace std;
class Land
{
public:
	Land();
	void show();
	~Land();
private:
	string _name;
	long int _popNbr;
	double _PIB;
	double _ecoPot;
	double _SuperDep;
	double _SuperGrw;
	double _natCat;						

};

