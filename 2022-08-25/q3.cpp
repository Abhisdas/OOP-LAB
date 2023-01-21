/*Q.1 Write a program to create class “basic” that stores the loan amount in rupees. Create another 
class “interest” that stores the number of years and rate of interest as its private data member. 
Calculate the simple interest and compound interest after providing input by using necessary 
function.*/

#include <iostream>
#include <math.h>
using namespace std;
class interest;
class basic
{
    int amount;
    public :
    void get()
    {
        cout << "Enter loan amount : " << endl;
        cin >> amount;
    }
    void put()
    {
        cout << "Loan amount = " << amount << endl;
    }
    friend void SI(basic, interest);
    friend void CI(basic, interest);
};
class interest
{
    int years;
    float rate;
    public :
    void get()
    {
        cout << "Enter time period in years : " << endl;
        cin >> years;
        cout << "Enter rate of interest : " << endl;
        cin >> rate;
    }
    void put()
    {
        cout << "Time period = " << years << " Years" << endl;
        cout << "Rate = " << rate << endl;
    }
    friend void SI(basic, interest);
    friend void CI(basic, interest);
};
void SI(basic x, interest y)
{
    double r = x.amount * y.years * y.rate / 100;
    cout << "Simple interest = " << r << endl;
}
void CI(basic x, interest y)
{
    double r = x.amount * (pow((1+y.rate/100),y.years)-1);
    cout << "Compound Interest = " << r << endl;
}
int main()
{
    basic a;
    interest b;
    a.get();
    b.get();
    a.put();
    b.put();
    SI(a,b);
    CI(a,b);
    return 0;
}