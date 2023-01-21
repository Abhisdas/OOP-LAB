/*1.WAP to create a class "rupee" that stores the amount of rupees at its private data member
Create another class "dollar" that stores the respective amount in dollars as its private data 
member. Input the amount of dollar from keyboard & convert to its respective amount in rupees & 
store that values to the rupees class and display it.
i) Perform the respective conversion by writing casting operator function.
ii) Also use the constructor method to perform the necessary conversion & display it.
(Hints : 1 dollar = 82.86 INR)*/

#include <iostream>
using namespace std;

class dollar;
class rupee
{
    double rs;
    public :
    rupee(){}
    rupee(double x){rs = x;}
    //rupee(dollar);
    void get()
    {
        cout << "Enter amount (in Rs) : " ;
        cin >> rs;
    }
    void show()
    {
        cout << "Amount (in Rs) : " << rs << endl;
    }
};
class dollar
{
    double usdt;
    public :
    void get()
    {
        cout << "Enter the amount (in $) : " ;
        cin >> usdt;
    }
    void show()
    {
        cout << "Amount (in $) : " << usdt << endl;
    }
    operator rupee()
    {
        return rupee(usdt * 82.86);
    }
    double reply()
    {
        return usdt;
    }
};
// rupee::rupee(dollar d)
// {
//     rs = d.reply()*82.86;
// }

int main()
{
    dollar d;
    d.get();
    d.show();
    rupee r;
    r = d;
    r.show();
    return 0;
}