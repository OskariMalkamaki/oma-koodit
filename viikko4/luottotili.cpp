#include "luottotili.h"
#include <iostream>
using namespace std;

luottotili::luottotili()
{
    cout << "olen luottotilin default konstruktori" << endl;
}

luottotili::luottotili(string om, double lr) : pankkitili(om)
{
    cout << " olen luottotilin parametri konstruktori" <<  endl;
    luottoraja = lr;
}

bool luottotili::deposit (double sum)
{

    cout << " olen luottotilin velanmaksu" << endl;
    cout << " saldo ennen " << saldo << endl;
    cout << " salado jälkeen " << saldo + sum << endl;
    if ( (sum < 0) || ( (sum + saldo) > 0 )) return false;
    saldo += sum;
    return true;
}

bool luottotili:: whitdraw (double sum)
{
    cout << "olen luottotilin velanotto" << endl;
    cout << "luottoraja: " << luottoraja << endl;
    cout << "saldo ennen" << saldo << endl;
    cout << "saldo jälkeen " <<  saldo- sum << endl;
    if ( (sum < 0) ||( ( std::abs(saldo) + sum) > luottoraja ) ) return false;
    saldo -= sum;
    return true;
}
