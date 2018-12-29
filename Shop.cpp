#include "pch.h"
#include "Shop.h"


Shop::Shop()
{}

void Shop::MasterInitializer(double price, double maxStorage,
	double productPrice, double levelIncreaser, double salesAverage, double xtremValue)
{
	_price = price;
	_maxStorage = maxStorage;
	_storage = maxStorage;
	_productPrice = productPrice;
	_levelIncreaser = levelIncreaser;
	_salesAverage = salesAverage;
	_extremeValue = xtremValue;
}

double Shop::getStorage()
{
	return _storage;
}

double Shop::getStorageMax()
{
	return _maxStorage;
}

double Shop::setStorage()
{
	double ntm = _storage;
	_storage = _maxStorage;
	return ntm;
}

double Shop::setSpecialStorage(double storage)
{
	_storage = storage;
	return _storage;
}

Shop::Shop(string location) 
{
	_location = location;
}

double Shop::salesIndex()
{
	srand(time(NULL));
	double x = 0;
	double y = 0;
	double z = 1;
	x += _extremeValue;
	y -= _extremeValue;
	double alea = rand() / (double)RAND_MAX;
	alea = alea * (y - x) + x;
	z += alea;
	return z;
}

void Shop::setLevelIncreaser(int level)
{
	_turnover *= (1 + (_levelIncreaser*(level - 1)));
}

double Shop::getTurnover()
{
	return _turnover;
}

void Shop::management()
{
	double z = salesIndex();
	_salesNumber = _salesAverage*z;
	if (_storage >= _salesNumber)
	{
		_turnover = _salesNumber * _productPrice;
		_storage -= _salesNumber;
	}
	else
	{
		double losses = _salesNumber - _storage;
		_storage = 0;
		_turnover = (_salesNumber - losses) * _productPrice;
		// fonction de Corporation qui vient récupérer la variable "losses
	}
}

double Shop::recuperation()
{
	double salePrice = _funds + _price / 2;
	return salePrice;
}
void Shop::show()
{
	cout << "price : " << _price << "\t";
	cout << "location : " << _location << "\t";
	cout << "differences : " << _extremeValue << "\t";
}

Shop::~Shop()
{}
