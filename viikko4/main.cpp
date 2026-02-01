#include <iostream>
#include "asiakas.h"

using namespace std;

int main()
{


    asiakas pt1("make", 1000);
    pt1.showsaldo();
    cout<<endl;

    pt1.talletus(250);
    pt1.luottonosto(150);
    pt1.showsaldo();
    pt1.luottonosto(900);
    pt1.luottomaksu(100);
    pt1.luottonosto(400);
    cout<<endl;

    asiakas pt2("teppo",2000);
    pt2.showsaldo();

    cout << endl;
    pt1.tilinsiirto(200,pt2);
    cout << endl;


    pt1.showsaldo();
    pt2.showsaldo();
    pt2.nosto(40);
    pt2.showsaldo();
    pt2.tilinsiirto(200,pt1);
    cout << endl;

    return 0;
}
