#pragma once
#include "World.h"
using namespace std;
class Bank
{
public:
	Bank();
	void show();
	~Bank();
private:
	string _land;
	double _manFees;
	double _rateAllowance;
	double _maxAllowance;
	int _MRD;			

};

