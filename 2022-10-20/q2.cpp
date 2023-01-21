/*2. wap to justify the overloading of logical AND using member function and bit wise AND using friend 
function*/

#include <iostream>
using namespace std;

class abc
{
    int x;
    public :
    abc(){}
    abc(int r)
    {
        x = r;
    }
    void show()
    {
        cout << "x = " << x << endl;
    }
    void get()
    {
        cout << "Enter values of x : " << endl;
        cin >> x ;
    }
    abc operator&&(abc d)
    {
        return abc(x && d.x);
    }
    friend abc operator&(abc d, abc e)
    {
        return abc(d.x & e.x);
    }
};

int main()
{
    abc m,n,p;
    cout << "Class m :" << endl;
    m.get();
    m.show();
    cout << "Class n :" << endl;
    n.get();
    n.show();
    cout << endl << "Class p : " << endl;
    p = m && n;
    cout << "m && n : "; 
    p.show();
    cout << endl << "m & n : ";
    p = m & n;
    p.show();
    return 0;
}