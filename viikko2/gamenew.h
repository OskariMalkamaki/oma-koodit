#ifndef GAMENEW_H
#define GAMENEW_H
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Gamenew // runko luokka määritteelle
{
public:
    Gamenew(int); //default konstruktori aka luodaan olio
    ~Gamenew();
    void play();

private:
    int maxNumber = 0;
    int playerGuess = 0;
    int randomNumber = 0;
    int numOfGuesses = 0;
    void printGAmeResult();
protected:

};

#endif // GAMENEW_H
