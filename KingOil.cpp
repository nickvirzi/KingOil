#include <iostream>
#include <array>

using namespace std;

class Game
{
public:
    int numberOfPlayers;

    int getNumberOfPlayers()
    {
        cout << "How many players are in the game? ";
        cin >> numberOfPlayers;
        cout << "There are " << numberOfPlayers << " players." << endl;
        return numberOfPlayers;
    }
};

class Player
{
public:
    string name;
    int numberOfDerricks;
};

void shuffleArray ()
{
    
}

int main()
{
    Game game;
    game.getNumberOfPlayers();

    Player **arrayOfPlayers = new Player *[game.numberOfPlayers];

    string tempName;

    for (int i = 0; i < game.numberOfPlayers; i++)
    {
        arrayOfPlayers[i] = new Player();
    }

    for (int i = 0; i < game.numberOfPlayers; i++)
    {
        cout << "Give player " << i + 1 << " a name: ";
        cin >> tempName;

        arrayOfPlayers[i]->name = tempName;
    }

    cout << "The players names are, " << arrayOfPlayers[0]->name << ", " << arrayOfPlayers[1]->name << ", " << arrayOfPlayers[2]->name << ", and " << arrayOfPlayers[3]->name << "." << endl;


}