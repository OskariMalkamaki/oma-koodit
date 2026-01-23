#include "italianchef.h"
#include <iostream>



italianChef::italianChef()
{
    cout << "olen italialainen default konstruktori"<< endl;

}
italianChef::italianChef(string cN)
{
    cout << "olen italialainen input konstruktori"<< endl;

}

italianChef::~italianChef()
{
    cout << "olen italialainen destruktori "<< endl;

}


bool italianChef::askSecret(string pw, int amountOfFlour, int amountOfWater )
{
    int numberOfPizzas;
    if (pw.compare(password)==0){ // muuta string compara käyttäen
    water = amountOfWater;
    flour = amountOfFlour;
    numberOfPizzas = makePizza();

    return true;
    }

    else
    {
    cout << "vaara salasana" << endl;
    return false;
    }
}

int italianChef::makePizza()
{
    cout << "tehdaan pizzaa" << endl;
    cout << "jauhoja on " << flour << "ja vetta on " << water << endl;
    int annos = 0;
    while (flour >= 5 && water >= 5){
    annos++;
    water = water-5;
    flour = flour-5;
    }

    cout << "siita saadaan "<< annos<< "pizzaa" << endl;
    return annos;

}
