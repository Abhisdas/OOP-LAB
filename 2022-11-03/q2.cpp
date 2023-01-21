/*2. WAP to create a class "length" that stores the length unit in feet and inches. Input the total 
length in inches at the time of creation of object.
i) Assign the length value of a respective object to system defined unit that stores the length in 
feet & print the output.
ii) Assign the total length unit which is stored in system defined variable to the object by using
necessary conversion function & display the length in feet & inches.
(Hints: Use all the constructors & destructors.)
 */

#include <iostream>
using namespace std;

class length
{
    int feet;
    double inches;
    public :
    length()
    {
        cout << "Enter length (in inches) : " ;
        cin >> inches;
        feet = 0;
    }
    length(double x)
    {
        feet = x;
        inches = (x-feet)*12;
    }
    ~length()
    {
        cout << "Destructed!" << endl;
    }
    void show()
    {
        cout << "Feet : " << feet << "\tInches : " << inches << endl;
    }
    operator double()
    {
        return inches/12.0;
    }
};

int main()
{
    length l;
    l.show();
    double d = l;
    cout << "Length in feet : " << d << endl;
    l = d;
    l.show();
    return 0;
}