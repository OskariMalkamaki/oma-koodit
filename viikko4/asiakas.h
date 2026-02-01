#ifndef ASIAKAS_H
#define ASIAKAS_H

#include <string>
#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

class asiakas
{
public:
    asiakas();
    asiakas(string,double);
    string getnimi();
    void showsaldo();
    bool nosto(double);
    bool talletus(double);
    bool luottomaksu(double);
    bool luottonosto(double);
    bool tilinsiirto(double,asiakas&);
private:
    string nimi;
    pankkitili käyttötili;
    luottotili luottotili;
};

#endif // ASIAKAS_H
