/*1.WAP to create a class student that stores the name, roll no., age of the student. Derive a class
mark from student that stores the marks of 3 subjects and the respective average mark.
a) Initialise the details at the time of creation of object by taking input from user.
b) The details have to be made input by explicitly calling the base class parameterized constructor.*/

#include <iostream>
#include <string>
using namespace std;

class student
{
    protected :
    string name;
    int roll, age;
    public :
    student(){}
    student(int x, string s, int y)
    {
        roll = x;
        name = s;
        age =y;
    }
};

class mark : protected student
{
    protected :
    int marks[3];
    float avg{};
    public :
    mark(){};
    mark(int x, string s, int y, int *p, float av): student(x,s,y)
    {
        for(int i=0; i<3; i++)
        marks[i] = p[i];
        avg = av;
    }
    void display()
    {
        cout << "\nRoll = " << roll << "\tName = " << name << "\tAge = " << age << endl;
        cout << "Marks are : ";
        for(int i=0; i<3; i++)
        cout << marks[i] << " ";
        cout << endl << "Average = " << avg << endl; 
    }
};

int main()
{
    int x,y,arr[3];
    string s;
    float avg;
    cout << "Enter roll, name & age of student respectively :" << endl;
    cin >> x >> s >> y;
    cout << "Enter marks of 3 subjects : " << endl;
    for(int i=0; i<3; i++)
    {
        cin >> arr[i];
        avg += arr[i];
    }
    avg /= 3;
    mark s1(x,s,y,arr,avg);
    s1.display();
    return 0;
}