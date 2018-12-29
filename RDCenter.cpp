#include "pch.h"
#include "RDCenter.h"


RDCenter::RDCenter()
{
}

void RDCenter::MasterInitializer(double price, double funds, double losePerTour, 
	double discoveryProba, int discoveryLevel, int maxLevel)
{
	_price = price;
	_funds = funds;
	_discoveryProba = discoveryProba;
	_losePerTour = losePerTour;
	_discoveryLevel = discoveryLevel;
	_maxLevel = maxLevel;
}

RDCenter::RDCenter(string location)
{
	_location = location;
}

RDCenter::RDCenter(string location, double funds)
{
	_location = location;
	_funds = funds;
}


int RDCenter::discovery()
{
	srand(time(NULL));
	_discoveryProba *= _funds / 100000;// ratio de découverte (+ le prix augmente, + discovery proba augmente
	double discovery = rand()/(double)RAND_MAX;
	if (discovery <= _discoveryProba)
	{
		if (_discoveryLevel < 10)
			_discoveryLevel++;
	}
	_funds *= _losePerTour;
	if(_discoveryLevel == 10)

	return _discoveryLevel;
}

double RDCenter::recuperation()
{
	double salePrice = _funds + _price / 2;
	return salePrice;
}

void RDCenter::show()
{
	cout << "price : " << _price << "\t";
	cout << "location : " << _location << "\t";
	cout << "funds : " << _funds << "\t";
	cout << "discovery Delay : " << _discovery << "\t";
}


RDCenter::~RDCenter()
{
}
