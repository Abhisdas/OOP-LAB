/*5. WAP to create a class student having the details of a student. Using class template 
concept, input the details for two students & display it to output screen.*/

#include <iostream>
#include <string>
using namespace std;

template <class T1, class T2, class T3>

class student
{
    T1 name;
    T2 roll, age ;
    T3 avg;
    public :
    student()
    {
        cout << "Enter name, roll, age & average marks respectively :" << endl;
        cin >> name >> roll >> age >> avg;
    }
    void show()
    {
        cout << "Name = " << name << "\tRoll = " << roll << "\tAge = " << age;
        cout << "\tAverage = " << avg << endl;
    }
};

int main()
{
    student <string, int, double>s1;
    student <string, int, int>s2;
    s1.show();
    s2.show();
    return 0;
}