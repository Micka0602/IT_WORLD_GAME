#pragma once
#include "World.h"
using namespace std;
class RDCenter
{
public:
	RDCenter();
	void MasterInitializer(double price, double funds, double losePerTour,
		double discoveryProba, int discoveryLevel, int maxLevel);
	RDCenter(string location);
	RDCenter(string location, double funds);
	int discovery();
	double recuperation();
	void show();
	~RDCenter();
private:
	double _price = 300000;
	string _location;
	double _funds = 100000;
	double _losePerTour = 0.5;
	double _discoveryProba = 0.25;
	int _discoveryLevel = 0;
	int _maxLevel = 10;
};

