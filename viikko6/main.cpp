#include <algorithm>
#include <iostream>
#include "student.h"
#include <vector>


using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;
    string sname;
    int sage;


    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.

            cout << "valinta 0" << endl;

            cout << "kerro opiskelijan nimi " << endl;
            cin >> sname ;
            cout << "kerro opiskelijan ika " << endl;
            cin >> sage ;

            studentList.emplace_back(sname,sage);
            cout << "lisättiin " << sname<< sage <<endl;

            break;

        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.

            cout << "valinta 1" << endl;
            cout << " tulostetaan opiskelija lista" << endl;

            for (auto &s: studentList) {
                cout << s.getName()<<" : " <<s.getAge() <<"\n";
            }

            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout << "valinta 2" << endl;
            cout << "jarjestetaan opiskelijat nimen mukaan "<< endl;

            sort(studentList.begin(),studentList.end(),[]( Student &a, Student &b)
            {
                return a.getName() < b.getName();
            });

            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout << "valinta 3" << endl;
            cout << "jarjestetaan opiskelijat ian mukaan "<< endl;

            sort(studentList.begin(),studentList.end(),[](Student &a,Student &b)
                 {
                     return a.getAge() < b.getAge();
                 });
            break;
        case 4:
        {
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            cout << "valinta 4" << endl;
            cout << "kerro opiskelijan nimi" << endl;

            cin >> sname;

           auto it = find_if(studentList.begin(),studentList.end(), [sname] (const Student &a)
            {
                return a.getName() == sname;
             });
            if (it != studentList.end()) {
               it ->printStudentInfo();
            } else {
                cout << "Opiskelijaa ei ole" << endl;
            }


            break;
        }

        default:
            cout<< "Wrong selection, stopping..."<<endl;

            break;
        }


    }   while(selection < 5);

return 0;
}
