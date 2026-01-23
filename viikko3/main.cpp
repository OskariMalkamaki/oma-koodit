#include <iostream>
#include "chef.h"
#include "italianchef.h"
#include <string>

using namespace std;

int main()
{
    string kokinNimi;
    cout << "Hello World!" << endl;
    Chef kokki_1("Lars");
   // Chef kokki_2();
    kokinNimi = kokki_1.getName();
    cout << "main:kokin nimi on " << kokinNimi << endl;
    kokki_1.makesalad(10);
    kokki_1.makesalad(4);
    kokki_1.makesalad(18);

    kokki_1.makesoup(3);
    kokki_1.makesoup(2);
    kokki_1.makesoup(31);

    italianChef it_kokki_1;
    italianChef it_kokki_2("fernando");

    it_kokki_1.makesalad(15);
    it_kokki_2.makesoup(7);

    it_kokki_1.askSecret("pizza",10,10);


    return 0;
}
