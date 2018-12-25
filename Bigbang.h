#ifndef BIGBANG_H
#define BIGBANG_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <time.h>
#include "World.h"
#include "Land.h"
#include "Corporation.h"
/*#include "Bank.h"
#include "Transport.h"*/
using namespace std;
class Bigbang
{
    public:
        Bigbang();
        void setWorld(int & nbPlayers, int & nbTours, int & dpt, int & nbLands, string & currency);
        void dataSheet();
        virtual ~Bigbang();
    protected:

    private:
    int nbPlayers;
    int nbTours;
    int dpt;
    int nbLands;
    string currency;
};

#endif // BIGBANG_H
