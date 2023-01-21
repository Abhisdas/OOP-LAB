/*1.wap to create a class test having the mark of a student overload the uniary minus using member 
function and friend function to justify the overloading of unary minus operattor*/

#include <iostream>
using namespace std;

class test
{
    int marks;
    public :
    test(){}
    test(int k){marks = k;}
    void show()
    {
        cout << "Mark : " << marks << endl;
    }
    void operator-()
    {
        marks = -marks;
    }
    friend void operator-(test &k)
    {
        k.marks = -k.marks;
    }
};

int main()
{
    test x(14);
    x.show();
    cout << "Using member function" << endl;
    x.operator-();
    x.show();
    cout << "Using friend function" << endl;
    operator-(x);
    x.show();

    return 0;
}