/*4. WAP to create a function template to swap two numbers.*/

#include <iostream>
using namespace std;

template <class T>

void swapnum(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x, y;
    cout << "Enter the value of x & y : " << endl;
    cin >> x >> y;
    cout << "x = " << x << "\ty = " << y << endl;
    swapnum(x,y);
    cout << "x = " << x << "\ty = " << y << endl;
    return 0;
}