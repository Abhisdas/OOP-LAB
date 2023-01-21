/*1.write a program to create a class student having the name , roll no., section name as its member.
Create another class marks which stores 3 subject marks and average mark of a student and is derived 
from student class. Input the details of two students and display all the details.*/

#include <iostream>
#include <string>
using namespace std;

class student
{
    protected:
    int roll;
    string name,section;
    public :
    void input()
    {
        cout << "Enter roll, name & section name respectively :" << endl;
        cin >> roll >> name >> section;
    }
    void show()
    {
        cout << "\nRoll = " << roll << "\tName = " << name << "\tSection = " << section << endl;
    }
};

class marks:public student
{
    int mark[3];
    float avg{};
    public :
    void get()
    {
        cout << "Enter marks :" << endl;
        for(int i=0; i<3; i++)
        {
            cin >> mark[i];
            avg += mark[i];
        }
        avg /=3;
    }
    void put()
    {
        cout << "Marks are : ";
        for(int i=0; i<3; i++)
        cout << mark[i] << " ";
        cout << endl << "Average = " << avg << endl;
    }

};

int main()
{
    marks s[2];
    for(int i=0; i<2; i++)
    {
        s[i].input();
        s[i].get();
    }
    for(int i=0; i<2; i++)
    {
        s[i].show();
        s[i].put();
    }
    return 0;
}