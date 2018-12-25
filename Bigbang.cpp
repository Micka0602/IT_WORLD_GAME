#include "Bigbang.h"

Bigbang::Bigbang()
{
    //ctor
}
void Bigbang::setWorld(int & nbPlayers, int & nbTours, int & dpt, int & nbLands, string & currency)
{
    int newNbPlayers, newNbTours, newDpt, newNbLands; string newCurrency;
    cout << endl << "Number of players :\t"; cin >> newNbPlayers;
    cout << endl << "Number of tours :\t"; cin >> newNbTours;
    cout << endl << "Real time per tour :\t"; cin >> newDpt;
    cout << endl << "Number of Lands :\t"; cin >> newNbLands;
    cout << endl << "Money type :\t"; cin >> newCurrency;
    nbPlayers = newNbPlayers;
    nbTours = newNbTours;
    dpt = newDpt;
    nbLands = newNbLands;
    currency = newCurrency;
}

void Bigbang::dataSheet()
{

}

Bigbang::~Bigbang()
{
    //dtor
}
