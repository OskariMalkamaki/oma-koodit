#include "student.h"
#include <iostream>
using namespace std;


Student::Student(string n,int a)
{
    cout << "parametrinen konstruktori" << endl;
    name = n;
    age = a;
}

string Student::getName() const
{


    return name;
}


void Student::setName(const string &newName)
{

    name = newName;
}

int Student::getAge() const
{


    return age;
}

void Student::setAge(int newAge)
{
    age = newAge;

}

void Student::printStudentInfo()
{
    cout << "name " << name << "Age" << age << endl;

}
