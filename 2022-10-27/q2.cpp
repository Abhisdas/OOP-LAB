/*2. WAP to create a class student having name, age, roll no, average mark as its member. Input the 
details from keyboard and display the details to the monitor by overloading the extraction and 
insertion operator.*/

#include <iostream>
#include <string>
using namespace std;

class student
{
    string name;
    int roll,age;
    float avg;
    public :
    friend ostream& operator<<(ostream& out, student &k)
    {
        out << "Name : " << k.name << "\tRoll : " << k.roll << "\tAge : " << k.age << "\tAverage : ";
        out << k.avg << endl;
        return out;
    }
    friend istream& operator>>(istream& in, student &k)
    {
        cout << "Enter name, roll, age & average mark respectively : " << endl;
        in >> k.name >> k.roll >> k.age >> k.avg;
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