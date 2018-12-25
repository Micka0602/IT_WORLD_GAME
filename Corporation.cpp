#include "Corporation.h"

Corporation::Corporation(string name, double amount)
{
    if(amount > 0)
        _amount = amount;
	_name = name;
}

/*void Corporation::addShop(Shop shop)
{
	_ShopsTab.push_back(shop);
	_shopsNumber++;
}

void Corporation::addRDCenter(RDCenter rdcenter)
{
	_RDCentersTab.push_back(rdcenter);
	_RDCentersNumber++;
}

void Corporation::addFactory(Factory factory)
{
	_factoriesTab.push_back(factory);
	_factoriesNumber++;
}

void Corporation::eraseRDCenter(int id)
{
	double recuperation;
	recuperation = _RDCentersTab[id].recuperation();
	_amount += recuperation;
	_RDCentersTab.erase(_RDCentersTab.begin() + id);
}

void Corporation:: Actualisation()
{
	int level = 0;
	for (int i = 0; i < _ShopsTab.size(); i++)
		_amount += _ShopsTab[i].getTurnover();

	for (int i = 0; i < _RDCentersTab.size(); i++)
	{
		if (level < _RDCentersTab[i].discovery())
			level = _RDCentersTab[i].discovery();
	}

	for (int i = 0; i < _factoriesTab.size(); i++)
		_storage += _factoriesTab[i].getStorage();

	for (int i = 0; i < _ShopsTab.size(); i++)
		_storage += _ShopsTab[i].getStorage();

	for (int i = 0; i < _ShopsTab.size(); i++)
	{
		if (_ShopsTab[i].getStorageMax() <= _storage)
			_storage -= _ShopsTab[i].setStorage();
		else
			_storage -= _ShopsTab[i].setSpecialStorage(_storage);
	}
}
*/
void Corporation::show()
{
	cout << "* Name :\t" << _name << "*" << endl;
	cout << "* Amount :\t" << _amount << "*" << endl;
	cout << "* Technologie number :\t"  << _technologiesNbr << "*" << endl;
	cout << "* Shops number :\t" << _shopsNumber << "*" << endl;
	cout << "* R et D Centers number :\t" << _RDCentersNumber << "*" << endl;
	cout << "* Factories number :\t" << _factoriesNumber << "*" << endl;
	/*for (int i = 0; i < _ShopsTab.size(); i++)
		_ShopsTab[i].show();
	for (int y = 0; y < _RDCentersTab.size(); y++)
		_RDCentersTab[y].show();
	for (int z = 0; z < _factoriesTab.size(); z++)
		_factoriesTab[z].show();*/
}

Corporation::~Corporation()
{
    //dtor
}
