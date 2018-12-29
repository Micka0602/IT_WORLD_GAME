#include "pch.h"
#include "World.h"


World::World()
{}

World::World(int tours)
{
	_toursNbr = tours;
}

void World::setToursNbr(int toursNbr, int TourDelay)
{
	_toursNbr = toursNbr;
	_DPT = TourDelay;
}

void World::setLandsNbr(int landsNbr)
{
	_landsNbr = landsNbr;
}

void World::setCurrency(char currency)
{
	_currency = currency;
}

void World::addLand(Land land)
{
	_LandsTab.push_back(land);
}

void World::addCorporation(Corporation Corp)
{
	_CorporationsTab.push_back(Corp);
}

void World::addBank(Bank bank)
{
	_BanksTab.push_back(bank);
}

void World::addTransport(Transport transport)
{
	_TransportsTab.push_back(transport);
}

void World::show()
{
	cout << "Nombre de Corporations : " << _corpNbr << "\t";
	cout << "Nombre de tours : " << _toursNbr << "\t";
	cout << "Temps par tour : " << _DPT << "\t";
	cout << "Nombre de pays : " << _landsNbr << "\t";
	cout << "type de money : " << _currency << endl;
	for (int i = 0; i < _LandsTab.size(); i++)
	{
		cout << "\t" <<"Land " << i << " :";
		_LandsTab[i].show();
	}
	cout << endl;
	for (int i = 0; i < _CorporationsTab.size(); i++)
	{
		cout << "\t" << "Corporation " << i << " :";
		_CorporationsTab[i].show();
	}
	cout << endl;
	for (int i = 0; i < _BanksTab.size(); i++)
	{
		cout << "\t" << "Bank " << i << " :";
		_BanksTab[i].show();
	}
	cout << endl;
	for (int i = 0; i < _TransportsTab.size(); i++)
	{
		cout << "\t" << "Transport " << i << " :";
		_TransportsTab[i].show();
	}
}


World::~World()
{}
