/*3.write a program to create a user defined zero argument constructor, parametrized and copy 
constructor and verify that the memory get released in the reverse order of their allocation by 
using a user defined destructor function.*/

#include <iostream>
#include <string>
using namespace std;

class abc
{
    int id;
    public :
    abc()
    {
        id = 1;
        cout << "Zero argument constructor!\tid = " << id << endl;
    }
    abc(int k)
    {
        id = k;
        cout << "Parameterized Constructor!\tid = " << id << endl;
    }
    abc(abc &x)
    {
        id = 3;
        cout << "Copy constructor!\tid =" << id << endl;
    }
    ~abc()
    {
        cout << "Constructor with data id = " << id << " destructed!" << endl;
    }
};

int main()
{
    abc a;
    abc b(2);
    abc c(b);
    return 0;
}