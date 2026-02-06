#include "seuraaja.h"
#include <iostream>
using namespace std;


seuraaja::seuraaja()
{
    cout << "seuraaja konstruktori" << endl;

}

seuraaja::seuraaja(string aNimi)
{
    cout << "seuraaja string konstruktori" << endl;
    nimi = aNimi;
}

string seuraaja::getNimi()
{
    cout << "getNimi" << endl;
    return (nimi);
}

void seuraaja::paivitys(string viesti)
{
    cout << "paivitys" << endl;
    cout << "viesti" << viesti << endl;

}


