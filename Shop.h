#pragma once
#include "World.h"
using namespace std;
class Shop
{
public:
	Shop();
	Shop(string location);
	void MasterInitializer(double price, double maxStorage, 
		double productPrice, double levelIncreaser, double salesAverage, double xtremValue);
	double getStorage();
	double getStorageMax();
	double setStorage();
	double setSpecialStorage(double storage);
	double salesIndex();
	void setLevelIncreaser(int level);
	double getTurnover();
	void management();
	double recuperation();
	void show();
	~Shop();
private:
	double _price = 200000;
	string _location;
	double _maxStorage;
	double _storage;
	double _productPrice = 100;
	double _levelIncreaser = 0;
	double _salesAverage = 10000;
	double _extremeValue = 0.25;
	double _salesNumber;
	double _turnover;
};

