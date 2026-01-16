#include "gamenew.h"

/*
    int maxNumber = 0;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
*/
Gamenew::Gamenew(int n)
{
    maxNumber = n;
    cout<<"peli luotui"<<endl;
}

Gamenew::~Gamenew()
{
    cout<<"PELI TUHOTTU"<<endl;
}

void Gamenew::play()
{

        srand(time(0));
        randomNumber = rand() % maxNumber + 1;

        while (playerGuess != randomNumber) {

            cout << "anna arvaus?" << endl;
            cin >> playerGuess ;

            cout << "arvaus on " << playerGuess << endl;
            numOfGuesses ++;

            if (randomNumber == playerGuess)
            {
                printGAmeResult();
            }
            else if(playerGuess < randomNumber)
            {
                cout<<"arvaamasi luku on pienempi" << endl;
            }
            else if(playerGuess > randomNumber)
            {
                cout<<"arvaamasi luku on suurempi" << endl;
            }
        }
}
void Gamenew::printGAmeResult()
{
    cout<<"voitit"<<endl;
    cout<<"arvasit"<<numOfGuesses<<"kertaa"<<endl;
}
