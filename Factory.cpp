#include "pch.h"
#include "Factory.h"

Factory::Factory()
{}

void Factory::masterInitializer(double price, double effeciency, double productionPerTour, double maxStorage)
{
	_production = _effeciencyAverage * _productionPerTour;
	_maxStorage = maxStorage;
}

Factory::Factory(string location)
{
	_location = location;
}

double Factory::getStorage()
{
	if ((_storage < _maxStorage) && ((_storage + _production) <= _maxStorage))
		_storage += _production;
	else if((_storage < _maxStorage) && ((_storage + _production) > _maxStorage))
		_storage = _maxStorage;

	return _storage;
}

double Factory::sale()
{
	double salePrice = _price / 2;
	return salePrice;
}

void Factory::show()
{
	cout << "price : " << _price << "\t";
	cout << "location : " << _location << "\t";
	cout << "product type : " << _productType << "\t";
}


Factory::~Factory()
{}
