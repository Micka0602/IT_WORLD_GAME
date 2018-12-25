#ifndef CORPORATION_H
#define CORPORATION_H

#include "Bigbang.h"
using namespace std;
class Corporation
{
public:
    Corporation(string name, double amount);
    /*void addShop(Shop shop);
    void addRDCenter(RDCenter rdcenter);
    void addFactory(Factory factory);
    void eraseRDCenter(int id);
    void Actualisation();*/
    void show();
    virtual ~Corporation();

protected:

private:
    string _name;
	double _amount = 1000000;
	int _technologiesNbr = 0;
	int _shopsNumber = 0;
    int _RDCentersNumber = 0;
	int _factoriesNumber = 0;
	double _storage;
	/*vector<Shop> _ShopsTab;
	vector<RDCenter> _RDCentersTab;
	vector<Factory> _factoriesTab;*/
};

#endif // CORPORATION_H
