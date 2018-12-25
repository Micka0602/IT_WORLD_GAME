#ifndef LAND_H
#define LAND_H

#include "World.h"
using namespace std;
class Land
{
    public:
        Land();
        Land(string name, long int popNb, double pib, double ecoPot, double superDep, double superGrw, double natCat);
        void show(int landsNumber);
        virtual ~Land();

    protected:

    private:
    string _name;
	long int _popNbr;
	double _PIB;
	double _ecoPot;
	double _SuperDep;
	double _SuperGrw;
	double _natCat;
};

#endif // LAND_H
