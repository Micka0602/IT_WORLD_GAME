#pragma once
#include "World.h"
using namespace std;
class Factory
{
public:
	Factory();
	Factory(string location);
	void masterInitializer(double price, double effeciency, double productionPerTour, double _maxStorage);
	double getStorage();
	double sale();
	void show();
	~Factory();
private:
	double _price = 200000;
	string _location;
	double _effeciencyAverage = 0.75;
	double _productionPerTour = 50000;
	double _maxStorage = 100000;
	double _storage;
	double _production;
};

