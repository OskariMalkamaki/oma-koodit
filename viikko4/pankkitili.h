#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <string>
using namespace std;


class pankkitili
{
public:
    pankkitili();
    pankkitili(string);
    double getBalance();
    virtual bool deposit(double);
    virtual bool whitdraw(double);


protected:
    string omistaja;
    double saldo = 0;

private:



};

#endif // PANKKITILI_H
