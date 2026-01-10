#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//funktion prototyyppit
int game(int maxnum);

int main()
{
    int lkm = game(20);
    cout << "arvausten lukumaara "<< lkm << endl;
}

int game (int maxnum){
    int arvaus = 0;
    int arvausten_lkm = 0;
    srand(time(0));
    int randomnumber = rand() % maxnum + 1;

    while (arvaus != randomnumber) {

        cout << "anna arvaus?" << endl;
        cin >> arvaus ;

        cout << "arvaus on " << arvaus << endl;
        arvausten_lkm ++;
        cout<< arvausten_lkm<<endl;

        if (randomnumber == arvaus)
        {
            cout << "oikein!" << endl;
        }
        else if(arvaus < randomnumber)
        {
            cout<<"arvaamasi luku on pienempi" << endl;
        }
        else if(arvaus > randomnumber)
        {
            cout<<"arvaamasi luku on suurempi" << endl;
        }
    }
    return arvausten_lkm;
}
