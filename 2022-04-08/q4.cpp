/*4.Write a program in C++ to create overloaded function area to compute area of circle,
rectangle  and square.*/

#include <iostream>
using namespace std;
#define PI 3.1416

float area(float);
int area(int, int);
int area(int);
int main()
{
    float r{};
    int l{},w{},s{};
    cout << "Enter the radius of the circle : " << endl;
    cin >> r;
    cout << "Enter the length and width of the rectangle :" << endl;
    cin >> l >> w;
    cout << "Enter the side of square :" << endl;
    cin >> s;
    cout << endl << endl;
    cout << "The area of the circle is : " << area(r) << endl;
    cout << "The area of the rectangle is : " << area(l,w) << endl;
    cout << "The area of the square is : " << area(s) << endl;
    return 0;
}

float area(float r)
{
    return PI*r*r;
}
int area(int l, int b)
{
    return l*b;
}
int area(int s)
{
    return s*s;
}