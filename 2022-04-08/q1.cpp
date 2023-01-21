/*1.Write a program in C++ that uses the reference variable concept and demonstrate 
the function pass by reference method*/

#include <iostream>

using namespace std;
void pass_by_reference(int &a)
{
    cout << a << endl; // printing the value of reference variable from function
    a=100;
    cout << a << endl; // printing the updated value of reference variable
}
int main()
{
    int x=10;
    cout << x << endl; //printing the value of x
    pass_by_reference(x);
    cout << x << endl; //printing the value of x to observe that x gets changed from function
    return 0;
}