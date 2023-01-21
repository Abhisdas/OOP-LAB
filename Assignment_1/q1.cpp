/*1. Write a program to overload the insertion and extraction operator.*/

#include <iostream>
#include <string>
using namespace std;

class student
{
    int roll,age,mark;
    string name;
    public :
    friend ostream& operator<<(ostream &out, student &k)
    {
        out << "Roll = " << k.roll << "\tName = " << k.name << "\tAge = " << k.age << "\tMark : " << k.mark << endl;
        return out;
    }
    friend istream& operator>>(istream &in, student &k)
    {
        cout << "Enter roll, name, age & mark of student respectively : " << endl;
        in >> k.roll >> k.name >> k.age >> k.mark;
        return in;
    }
};

int main()
{
    student s;
    cin >> s;
    cout << s;
    return 0;
}