#ifndef WORLD_H
#define WORLD_H

#include "Bigbang.h"
using namespace std;

class World
{
public:
	World();
	World(int CorpsNbr);
    void initializer(int nbPlayers, int nbTours, int dpt, int nbLands, string currency);
	void landsCreation();
	void LandsStructStorage();
    void defaultLands();
	void shopCreation();
	void RDCenterCreation();
	void factoryCreation();
	void CorpInitializer(double & amount);
	void CorpInitializer(int & corpsNbr);
	void CorpCreation(int choice);
	/*void setToursNbr(int toursNbr, int TourDelay);
	void setLandsNbr(int landsNbr);
	void setCurrency(char currency);*/
	void addLand(class Land land);
	void addCorporation(class Corporation corp);
	/*void addBank(Bank bank);
	void addTransport(Transport transport);*/
	void show();
	virtual ~World();
private:
	int _corpsNbr;
	int _toursNbr = 15;
	int _DPT = 1;
	int _landsNbr;
	string _currency = "dollar";
	struct LandStruct
    {
        string name;
        long int pop;
        double pib;
        double ecoPot;
        double superDep;
        double superGrw;
        double natCat;
    };
    vector<LandStruct> _LandsStruct;
    double _shopPrice = 200000;
    struct shopStruct
    {
        double _maxStorage;
        double _productPrice;
        double _salesAverage;
        double _extremeValue;
    };
    double _RDCenterPrice = 200000;
    struct RDCenterStruct
    {
        double _researchExpenses = 0.5;
        double _discoveryProba = 0.25;
        int _maxLevel = 10;
    };
    double _factoryPrice = 200000;
    struct factoryStruct
    {
        double _productionExpenses = 25;
        double _effeciency = 50000;
        double _maxStorage = 100000;
    };
	vector<Land> _LandsTab;
	vector<Corporation> _CorporationsTab;
	/*vector<Bank> _BanksTab;
	vector<Transport> _TransportsTab;*/
};

#endif // WORLD_H
