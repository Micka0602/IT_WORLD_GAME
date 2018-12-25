#include "Bigbang.h"

using namespace std;

int main()
{
    cout << " *****************************************************************************" << endl;
	cout << " ******************** Hi and Welcome to the IT World Game ********************" << endl;
	cout << " *****************************************************************************" << endl;
	cout << " *************************** Do you want to play ? ***************************" << endl;
	cout << " *****************************************************************************" << endl;
	cout << " ****************************** 1. YES \t 2. NO *******************************" << endl;
	cout << " *****************************************************************************" << endl;
	int turn, play, choice;
	cin >> turn;
	if(turn != 1)
        return 0;
    Bigbang bigbang;
    while(play != 1)
    {
        cout << " *****************************************************" << endl;
        cout << " *********************** Menu ************************" << endl;
        cout << " *****************************************************" << endl;
        cout << " ****** 1. Set your own World and Start Playing ******" << endl;
        cout << " *****************************************************" << endl;
        cout << " ****** 2. Play in a default World *******************" << endl;
        cout << " *****************************************************" << endl;
        cout << " ****** 3. Data-sheet ********************************" << endl;
        cout << " *****************************************************" << endl;
        cout << " ****** 4. Leave *************************************" << endl;
        cout << " *****************************************************" << endl;
        int choice1;
        cin >> choice1;
        if(choice1 == 1)
        {
            turn = 1;
            play = 1;
            choice = 1;
        }
        if(choice1 == 2)
        {
            World world;
            turn = 1;
            play = 1;
            choice = 2;
        }
        if(choice1 == 3)
        {
            cout << " ****************************************************" << endl;
            cout << " ******************** Data Sheet ********************" << endl;
            cout << " ****************************************************" << endl;
            cout << " ****************************************************" << endl;
        }
        if(choice1 == 4)
        {
            turn = 0;
            play = 1;
        }
    }
    if(turn != 1)
    {
        cout << "*** Good bye ! ***";
        return 0;
    }
    World world;
    if(choice == 1)
    {
        int nbPlayers, nbTours, dpt, nbLands; string currency;
        bigbang.setWorld(nbPlayers, nbTours, dpt, nbLands, currency);
        world.initializer(nbPlayers, nbTours, dpt, nbLands, currency);
        world.landsCreation();
        world.shopCreation();
        world.factoryCreation();
        world.RDCenterCreation();
        world.CorpCreation(choice);
    }
    if(choice == 2)
    {
        world.LandsStructStorage();
        world.defaultLands();
        world.CorpCreation(choice);
    }
}
