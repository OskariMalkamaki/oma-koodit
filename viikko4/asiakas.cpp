#include "asiakas.h"
#include <iostream>
using namespace std;

asiakas::asiakas()
{
    cout << "asiakas default konstruktori" << endl;


}

asiakas::asiakas(string name,double lr) : käyttötili(name), luottotili(name, lr)
{
    cout << "asiakas olen parameetri konstruktorissa " << endl;
    nimi = name;
}


string asiakas::getnimi()
{
    return nimi;
}

void asiakas::showsaldo()
{
    cout << "käyttötilin saldo: " << käyttötili.getBalance() << endl;
    cout << "luottotilin saldo: " << luottotili.getBalance() << endl;
}

bool asiakas::talletus(double sum)
{
    cout<<"Asiakas "<<nimi<<" tallettaa" <<endl;
    bool onnistu = käyttötili.deposit(sum);
    if(!onnistu)
    {
        cout<<"Talletus epaonnistui"<<endl;
    }
    return onnistu;
}

bool asiakas::nosto(double sum)
{
    cout<<"Asiakas "<<nimi<<" nostaa"<<endl;
    bool onnistu = käyttötili.whitdraw(sum);
    if(!onnistu)
    {
        cout<<"nosto epaonnistui"<<endl;
    }
    return onnistu;
}

bool asiakas::luottomaksu (double sum)
{
    cout<<"Asiakas "<<nimi<<" maksaa luottoa" <<endl;

    bool onnistu = käyttötili.deposit(sum);
    if(!onnistu)
    {
        cout<<"Maksu epaonnistui"<<endl;
    }
    return onnistu;
}

bool asiakas::luottonosto(double sum)
{
    cout<<"Asiakas "<<nimi<<" nostaa luottotililta" <<endl;
    bool onnistu = käyttötili.whitdraw(sum);
    if(!onnistu)
    {
        cout<<"nosto epaonnistui"<<endl;
    }
    return onnistu;
}
    bool asiakas::tilinsiirto(double sum, asiakas &kohde)
    {
        //tarvittavat tarkistukset jo nosto funktiossa;
        cout<<"Asiakas "<<nimi<<" Siirtaa "<< sum << " Asiakkalle " << kohde.getnimi()<<endl;
        bool onnistu = nosto(sum);
        if(onnistu)
        {
            kohde.talletus(sum);
            return true;
        }
        else
        {
            cout<<"Tilisiirto epäonnistui"<<endl;
            return false;
        }
    }



