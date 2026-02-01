#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include "pankkitili.h"


class luottotili : public pankkitili
{
public:
    luottotili();
    luottotili(string, double);
    virtual bool deposit(double) override;
    virtual bool whitdraw(double)override;

protected:
    double luottoraja = 0;

};

#endif // LUOTTOTILI_H
