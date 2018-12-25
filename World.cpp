#include "World.h"

World::World()
{}
World::World(int CorpsNbr)
{
    _corpsNbr = CorpsNbr;
}
void World::initializer(int nbPlayers, int nbTours, int dpt, int nbLands, string currency)
{
    _corpsNbr = nbPlayers;
	_toursNbr = nbTours;
    _DPT = dpt;
    _landsNbr = nbLands;
	_currency = currency;
}

void World::show()
{
    cout << "[Caracteristiques de votre monde]" << endl;
    cout << "Nombre de Corporations :\t" << _corpsNbr << endl;
	cout << "Nombre de tours restants :\t" << _toursNbr << endl;
	cout << "Temps par tour :\t" << _DPT << endl;
	cout << "Nombre de pays :\t" << _landsNbr << endl;
	cout << "Type de money :\t" << _currency << endl << endl;
}
void World::LandsStructStorage()
{
    typedef struct LandStruct LandStruct;
    LandStruct France;
    France.name = "France";
    France.pop = 67120000;
    France.pib = 2,583E+12;
    France.ecoPot = 1,5E+12;
    France.superDep = 0,05;
    France.superGrw = 0,05;
    France.natCat = 0,005;
    LandStruct United_Kingdom;
    United_Kingdom.name = "United Kingdom";
    United_Kingdom.pop = 66020000;
    United_Kingdom.pib = 2,622E+12;
    United_Kingdom.ecoPot = 1,15E+12;
    United_Kingdom.superDep = 0,05;
    United_Kingdom.superGrw = 0,05;
    United_Kingdom.natCat = 0,005;
    LandStruct Germany;
    Germany.name = "Germany";
    Germany.pop = 82790000;
    Germany.pib = 3,677E+12;
    Germany.ecoPot = 1,721E+12;
    Germany.superDep = 0,05;
    Germany.superGrw = 0,05;
    Germany.natCat = 0,005;
    LandStruct United_States;
    United_States.name = "United-States";
    United_States.pop = 325700000;
    United_States.pib = 1,939E+13;
    United_States.ecoPot = 2,4E+12;
    United_States.superDep = 0,05;
    United_States.superGrw = 0,05;
    United_States.natCat = 0,005;
    LandStruct Mexico;
    Mexico.name = "Mexico";
    Mexico.pop = 129200000;
    Mexico.pib = 1,15E+12;
    Mexico.ecoPot = 2,928E+11;
    Mexico.superDep = 0,1;
    Mexico.superGrw = 0,1;
    Mexico.natCat = 0,015;
    LandStruct Brazil;
    Brazil.name = "Brazil";
    Brazil.pop = 209300000;
    Brazil.pib = 2,056E+12;
    Brazil.ecoPot = 4,644E+11;
    Brazil.superDep = 0,2;
    Brazil.superGrw = 0,2;
    Brazil.natCat = 0,02;
    LandStruct China;
    China.name = "China";
    China.pop = 1386000000;
    China.pib = 1,224E+13;
    China.ecoPot = 2,591E+12;
    China.superDep = 0.05;
    China.superGrw = 0,05;
    China.natCat = 0,02;
    LandStruct Japan;
    Japan.name = "Japan";
    Japan.pop = 126800000;
    Japan.pib = 4,872E+12;
    Japan.ecoPot = 1,678E+12;
    Japan.superDep = 0,05;
    Japan.superGrw = 0,05;
    Japan.natCat = 0,05;
    LandStruct Russia;
    Russia.name = "Russia";
    Russia.pop = 144500000;
    Russia.pib = 1,578E+12;
    Russia.ecoPot = 2,539E+11;
    Russia.superDep = 0,005;
    Russia.superGrw = 0,05;
    Russia.natCat = 0,005;
    LandStruct Burkina_Faso;
    Burkina_Faso.name = "Burkina Faso";
    Burkina_Faso.pop = 19190000;
    Burkina_Faso.pib = 12870000000;
    Burkina_Faso.ecoPot = 3864000000;
    Burkina_Faso.superDep = 0,005;
    Burkina_Faso.superGrw = 0,1;
    Burkina_Faso.natCat = 0,05;
    LandStruct Tchad;
    Tchad.name = "Tchad";
    Tchad.pop = 14900000;
    Tchad.pib = 9981000000;
    Tchad.ecoPot = 1131000000;
    Tchad.superDep = 0,005;
    Tchad.superGrw = 0,1;
    Tchad.natCat = 0,05;
    LandStruct Niger;
    Niger.name = "Niger";
    Niger.pop = 21480000;
    Niger.pib = 8120000000;
    Niger.ecoPot = 1043000000;
    Niger.superDep = 0,005;
    Niger.superGrw = 0,1;
    Niger.natCat = 0,05;
    _LandsStruct.push_back(France);
    _LandsStruct.push_back(United_Kingdom);
    _LandsStruct.push_back(Germany);
    _LandsStruct.push_back(United_States);
    _LandsStruct.push_back(Mexico);
    _LandsStruct.push_back(Brazil);
    _LandsStruct.push_back(China);
    _LandsStruct.push_back(Japan);
    _LandsStruct.push_back(Russia);
    _LandsStruct.push_back(Burkina_Faso);
    _LandsStruct.push_back(Tchad);
    _LandsStruct.push_back(Niger);
}
void World::defaultLands()
{
    srand(time(NULL));
    int LandNumber=rand()%4+1;
    for(int i = 0; i < 3; i++)
    {
        Land land(_LandsStruct[(LandNumber*i)].name, _LandsStruct[(LandNumber*i)].pop,
                  _LandsStruct[(LandNumber*i)].pib, _LandsStruct[(LandNumber*i)].ecoPot,
                  _LandsStruct[(LandNumber*i)].superDep, _LandsStruct[(LandNumber*i)].superGrw,
                  _LandsStruct[(LandNumber*i)].natCat);
        addLand(land);
    }
    for(int i=0; i < _LandsTab.size();i++)
    {
        _LandsTab[i].show(i);
    }
}
void World::landsCreation()
{
    string name;
    long int popNbr;
    double PIB, ecoPot, SuperDep, SuperGrw, natCat;
    cout << "[Initialization of the Lands]" << endl;
    for(int i=0;i<_landsNbr; i++)
    {
        cout << "[LAND" << i + 1 << "]" << endl;
        cout << "\t" << "name :\t";
        cin >> name;
        cout << endl << "\t" << "Population :\t";
        cin >> popNbr;
        cout << endl << "\t" << "PIB :\t";
        cin >> PIB;
        cout << endl << "\t" << "Economic potential :\t";
        cin >> ecoPot;
        cout << endl << "\t" << "percentage of Super Depression :\t";
        cin >> SuperDep;
        cout << endl << "\t" <<  "percentage of Super Growth :\t";
        cin >> SuperGrw;
        cout << endl << "\t" << "percentage of Natural Catastroph :\t";
        cin >> natCat;
        cin.ignore();
        Land land(name, popNbr, PIB, ecoPot, SuperDep, SuperGrw, natCat);
        addLand(land);
    }
    for(int i=0; i < _LandsTab.size();i++)
    {
        _LandsTab[i].show(i);
    }
}

typedef struct shopStruct shopStruct;
void World::shopCreation()
{
    shopStruct ShopStructure;
    cout << "[Initialization of the Shops]" << endl;
    cout << "* Price of a Shop :\t"; cin >> _shopPrice;
    cout << endl << "\t" << "Max storage :\t";
    cin >> ShopStructure._maxStorage;
    cout << endl << "\t" << "Price of a product :\t";
    cin >> ShopStructure._productPrice;
    cout << endl << "\t" << "Average of sales per tour :\t";
    cin >> ShopStructure._salesAverage;
    cout << endl << "\t" <<  "Range around the sales average :\t";
    cin >> ShopStructure._extremeValue;
    cin.ignore();
}

typedef struct RDCenterStruct RDCenterStruct;
void World::RDCenterCreation()
{
    RDCenterStruct RDCenterStructure;
    cout << "[Initialization of the RD Centers]" << endl;
    cout << "* Price of a RD Center :\t";
    cin >> _RDCenterPrice;
    cout << endl << "\t" << "Expenses of researches (per tour) :\t";
    cin >> RDCenterStructure._researchExpenses;
    cout << endl << "\t" << "Probability of a discovery :\t";
    cin >> RDCenterStructure._discoveryProba;
    cout << endl << "\t" << "Max level of the main product :\t";
    cin >> RDCenterStructure._maxLevel;
    cin.ignore();
}

typedef struct factoryStruct factoryStruct;
void World::factoryCreation()
{
    factoryStruct factoryStructure;
    cout << "[Initialization of the Factories]" << endl;
    cout << "* Price of a Factory :\t";
    cin >> _factoryPrice;
    cout << endl << "\t" << "Expenses of production (per product) :\t";
    cin >> factoryStructure._productionExpenses;
    cout << endl << "\t" << "Efficiency of the production (per tour) :\t";
    cin >> factoryStructure._effeciency;
    cout << endl << "\t" << "Max storage of products :\t";
    cin >> factoryStructure._maxStorage;
    cin.ignore();
}

void World::addLand(Land land)
{
	_LandsTab.push_back(land);
}
void World::CorpInitializer(double & amount)
{
    amount = 0;
    cout << "*******************************************************************" << endl;
    cout << "************** [Initialization of the Corporations] **************" << endl;
    cout << "*******************************************************************" << endl;
    cout << "* Start amount of the Corporations :\t"; cin >>amount;
}

void World::CorpInitializer(int & corpsNbr)
{
    _corpsNbr = 0;
    cout << "*******************************************************************" << endl;
    cout << "************** [Initialization of the Corporations] **************" << endl;
    cout << "*******************************************************************" << endl;
    cout << "* Please, specify how many players are going to play :\t"; cin >>_corpsNbr;
}
void World::CorpCreation(int choice)
{
    string name;
	double amount;
	if(choice == 1)
        CorpInitializer(amount);
    if(choice == 2)
        CorpInitializer(_corpsNbr);
    cout << "********************************************" << endl;
    cout << "********* [Creation] ***********************" << endl;
    cout << "********************************************" << endl;
    for(int i = 0; i<_corpsNbr; i++)
    {
        cout << "[Corporation" << i + 1 << "]" << endl;
        cout << "name :\t";
        cin >> name;
        cin.ignore();
        Corporation corporation(name, amount);
        addCorporation(corporation);
    }
    for(int i=0; i < _CorporationsTab.size();i++)
    {
        _CorporationsTab[i].show();
    }
}

void World::addCorporation(Corporation Corp)
{
	_CorporationsTab.push_back(Corp);
}

World::~World()
{}
