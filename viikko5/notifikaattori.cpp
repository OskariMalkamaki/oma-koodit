#include "notifikaattori.h"
#include <iostream>

notifikaattori::notifikaattori() {
    cout << "n konst" << endl;
}

void notifikaattori::lisaa(seuraaja* lisSeuraajaPtr)
{
    cout << "lis s" << endl;
    if (lisSeuraajaPtr == nullptr) return;
    if (seuraajat == nullptr){
        seuraajat = lisSeuraajaPtr;
        return;
    }
    lisSeuraajaPtr->next = seuraajat;
    seuraajat = lisSeuraajaPtr;
}

void notifikaattori::poista(seuraaja* poistSeuraajaPtr)
{
    cout << "poist s" << endl;
    if (poistSeuraajaPtr == nullptr) return;
    if (seuraajat == nullptr) return;
    if (seuraajat == poistSeuraajaPtr)
    {
        seuraajat = seuraajat ->next;
        return;
    }
    seuraaja* seurTempNext = seuraajat->next;
    seuraaja* seurTempPrev = seuraajat;
    while(seurTempNext->next != nullptr)
    {
        if (seurTempNext == poistSeuraajaPtr)
        {
            seurTempPrev->next = seurTempNext->next;
            return;
        }
        seurTempPrev = seurTempNext;
        seurTempNext = seurTempNext->next;

    }
    if (seurTempNext == poistSeuraajaPtr)
    {
        seurTempPrev->next = nullptr;
    }


}

void notifikaattori::tulosta()
{

    if (seuraajat == nullptr)
    {
        cout << "e1 seuraajat" << endl;
        return;
    }
    seuraaja* seurTempNext = seuraajat;
    while (seurTempNext->next != nullptr)
    {
        cout << seurTempNext->getNimi() << endl;
        seurTempNext = seurTempNext->next;

    }
    cout << seurTempNext->getNimi() << endl;

}

void notifikaattori::postita(string viesti)
{

    if (seuraajat == nullptr)
    {
        cout << "e1 seuraajat" << endl;
        return;
    }
    seuraaja* seurTempNext = seuraajat;
    while (seurTempNext->next != nullptr)
    {
        seurTempNext->paivitys(viesti);
        seurTempNext = seurTempNext->next;

    }
    seurTempNext->paivitys(viesti);

}





