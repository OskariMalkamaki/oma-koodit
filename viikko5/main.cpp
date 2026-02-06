#include <iostream>
#include "notifikaattori.h"
using namespace std;


int main()
{
    cout << "Hello World!" << endl;


    notifikaattori n;
    seuraaja* s1 = new seuraaja("david");
    seuraaja* s2 = new seuraaja("goggins");
    seuraaja* s3 = new seuraaja("bouts");

    n.tulosta();
    n.postita("ja heikaa");
    n.poista(s2);

    n.lisaa(s1);
    n.lisaa(s2);
    n.lisaa(s3);

    n.tulosta();
    n.postita(" Ja heikaa");

    n.poista(s2);
    n.tulosta();
    n.poista(s1);
    n.poista(s3);
    n.tulosta();

return 0;
}
