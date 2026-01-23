#include "chef.h"
#include <iostream>


Chef::Chef()
{
    cout<< "olen default konstruktori"<<endl;
}

Chef::Chef(string cN)
{
    cout<< "olen input konstruktori"<<endl;
    chefName = cN;
}

Chef::~Chef()
{
    cout<< "olen default destruktori"<<endl;
}

int Chef::makesalad(int numberOfItems)
{
    cout<<"olen salaatti funktiossa"<<endl;
    // int numberOfPortions = numberOfItems/5;
    cout << "annoit:" << numberOfItems << "ainesta" << endl;
    cout << "siita saadaan "<< numberOfItems/5 << "saslaattia" << endl;

    return numberOfItems/5;
}

int Chef::makesoup(int numberOfItems)
{
    cout<<"olen keitto funktiossa"<<endl;
    cout << "annoit:" << numberOfItems << "ainesta" << endl;
    cout << "siita saadaan "<< numberOfItems/3 << "keittoa" << endl;

    return numberOfItems/3;
}

string Chef::getName()
{
    cout<< "olen getterissä"<< endl;
    cout << "kokin nimi on :"<< chefName << endl;
    return  chefName;
}

void Chef ::setName(string cN)
{
    cout << " olen setterissa " << endl;

    chefName = cN;
}




