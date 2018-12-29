#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include "Land.h"
#include "Bank.h"
#include "Transport.h"
#include "Corporation.h"
#include "Shop.h"
#include "RDCenter.h"
#include "Factory.h"
using namespace std;
class World
{
public:
	World();
	World(int tours);
	void setToursNbr(int toursNbr, int TourDelay);
	void setLandsNbr(int landsNbr);
	void setCurrency(char currency);
	void addLand(Land land);
	void addCorporation(Corporation corp);
	void addBank(Bank bank);
	void addTransport(Transport transport);
	void show();
	~World();
private:
	int _corpNbr;
	int _toursNbr;
	int _DPT;
	int _landsNbr;
	char _currency;

	vector<Land> _LandsTab;
	vector<Corporation> _CorporationsTab;
	vector<Bank> _BanksTab;
	vector<Transport> _TransportsTab;									

};

