/*2. Write a program to create a class student that stores roll number,name and average mark of a 
student. Overload the new operator to allocate memory and thenoverload post decrement operator to 
increase the average mark and display all the details.*/

#include <iostream>
#include <string>
using namespace std;

class student
{
    int roll;
    string name;
    double avg;
    public :
    void get()
    {
        cout << "Enter roll, name & average mark respectively : " << endl;
        cin >> roll >> name >> avg;
    }
    void* operator new(size_t size)
    {
        cout << "Overloading new operator" << endl;
        void *p = malloc(size);
        return p;
    }
    void operator--()
    {
        avg++;
    }
    void show()
    {
        cout << "Roll = " << roll << "\tName = " << name << "\tAverage = " << avg << endl;
    }
};

int main()
{
    student *s = new student;
    s->get();
    s->show();
    return 0;
}