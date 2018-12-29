#pragma once
#include "World.h"
using namespace std;
class Transport
{
public:
	Transport();
	Transport(string type, double FeesPerOne);
	void show();
	~Transport();
private:
	string _type;
	double _FPO;
	double _FPT = _FPO*9.5;
	double _FPH = _FPO*90;
	double _FPTH = _FPO* 850;
	double _FPTTH = _FPO*8000;
	double _FPHTH = _FPO*75000;					
};

