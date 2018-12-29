#include "pch.h"
#include "Corporation.h"


Corporation::Corporation()
{
}

Corporation::Corporation(string name)
{
	_name = name;
}

Corporation::Corporation(string name, double amount)
{
	_amount = amount;
}

void Corporation::addShop(Shop shop)
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

void Corporation::show()
{
	
	cout << "name : " << _name << "\t";
	cout << "amount : " << _amount << "\t";
	cout << "technologie nb : " << _technologiesNbr << "\t";
	cout << "shop nb : " << _shopsNumber << "\t";
	cout << "r&d nb : " << _RDCentersNumber << "\t";
	cout << "factories nb : " << _factoriesNumber << "\t";
	for (int i = 0; i < _ShopsTab.size(); i++)
		_ShopsTab[i].show();
	for (int y = 0; y < _RDCentersTab.size(); y++)
		_RDCentersTab[y].show();
	for (int z = 0; z < _factoriesTab.size(); z++)
		_factoriesTab[z].show();
}

Corporation::~Corporation()
{
}
