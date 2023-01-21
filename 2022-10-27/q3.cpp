/*3. WAP to overload the assignment operator to assign the properties of one object to another. Also, 
add the constructors and destructors to verify the respective invocation. */

#include <iostream>
using namespace std;

class abc
{
    int x,y;
    public :
    abc()
    {
        cout << "Zero argument constructor :" << endl;
    }
    abc(int m, int n)
    {
        cout << "Parameterized constructor :" << endl;
    }
    abc(abc &k)
    {
        cout << "Copy constructor called " << endl;
        x= k.x;
        y=k.y;
    }
    ~abc()
    {
        cout << "Destructed!" << endl;
    }
    void get()
    {
        cout << "Enter the value of x & y : " << endl;
        cin >> x >> y; 
    }
    void show()
    {
        cout << "x = " << x << "\ty = " << y << endl;
    }
    void operator=(abc d)
    {
        cout << "= operator overloaded " << endl;
        x = d.x;
        y = d.y;
    }
};

int main()
{
    abc m;
    cout << "Object m : " << endl;
    m.get();
    m.show();
    abc n;
    cout << "Object n : " << endl;
    n = m;
    n.show();
    return 0;
}