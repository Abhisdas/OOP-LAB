/*WAP to create a class student having a details of like name roll age and 4 subjects marks. Input 
the details of 2 students using necessary member functions. Display by calling friend function. 
Use the concept of array of objects to initialise and display.
(b)Return the details of that student to another who is having higher average mark using 
1.member function 2.friend function*/

#include <iostream>
#include <string>
using namespace std;

class student
{
    int roll;
    string name;
    int age;
    int marks[4];
    double avg{};

    public :
    void get()
    {
        cout << "Enter the roll, name & age respectively :" << endl;
        cin >> roll >> name >> age;
        cout << "Enter the marks in 4 subjects respectively : " << endl;
        for(int i=0; i<4; i++)
        {
            cin >> marks[i];
            avg+=marks[i];
        }
        avg/=4.0;
    }
    friend void show(student a)
    {
        cout << "Roll = " << a.roll << "\tName = " << a.name << "\tAge = " << a.age << endl;
        cout << "Marks = " ;
        for(int i=0; i<4; i++)
        cout << a.marks[i] << " ";
        cout << endl;
        cout << "Avg = " << a.avg;
        cout << endl;
    }
    friend student high_avg(student *s)
    {
        if(s[0].avg > s[1].avg)
        {
            return s[0];
        }
        else
        {
            return s[1];
        }
    }
    student high_avg1(student *s)
    {
        if(s[0].avg > s[1].avg)
        {
            return s[0];
        }
        else
        {
            return s[1];
        }
    }

};

int main()
{
    student s[2];
    int i{};
    for(; i<2; i++)
    {
        s[i].get();
        
    }
    for(i=0; i<2; i++)
    {
        cout << endl << endl;
        show(s[i]);
    }
    student r;
    r = high_avg(s);
    cout << "\nThe details of student having higher average is : " << endl;
    show(r);
    r = s[0].high_avg1(s);
    show(r);
    return 0;
}