#include "pankkitili.h"
#include <iostream>
#include <string>
using namespace std;

pankkitili::pankkitili()
{
    // luodaan konstruktori
    cout << "olen pankkitilin default konstuktorissa" << endl;

}

pankkitili::pankkitili(string om)
{
    cout << "olen pankkitilin parametri konstruktorissa " << endl;
    omistaja = om ;
}

double pankkitili :: getBalance()
{
    cout<< "olen saldo kyselyssä"<<endl;
    return saldo;
}


bool pankkitili:: deposit(double sum)
{
    cout<< "olen pankkitilin talletuksessa"<< endl;
    if (sum < 0 )return false;
    saldo += sum;
    return true;
}

bool pankkitili:: whitdraw(double sum)
{
    cout <<" olen pankkitilin tallrtuksessa "<< endl;
    if ( (sum < 0) || (saldo - sum < 0 ) )return false;
    saldo -= sum;
    return true;
}
