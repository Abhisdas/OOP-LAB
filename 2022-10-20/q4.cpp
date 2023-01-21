/*4.wap to create a class test that stores the no of units of an item and price of each unit in rupees 
input the details for 2 units overload the greater than> operator which compares between the total 
price between the two instance and returns the property of that instance who is having higher total 
value other wise it displays equal when the total value is found to be same*/

#include <iostream>
using namespace std;

class test
{
    int quantity;
    float price;
    public :
    test()
    {
        cout << "Enter the quantity of item : " ;
        cin >> quantity;
        cout << "Enter the price of item : ";
        cin >> price;
    }
    test(int k,int l){quantity = k; price = l;};
    void show()
    {
        cout << "Quantity : " << quantity << "\tPrice : " << price << endl;
        cout << "Total value : " << quantity * price << endl;
    }
    friend test operator>(test m, test n)
    {
        if(m.quantity*m.price >= n.quantity*n.price)
        return m;
        else 
        return n;
        
    }
};

int main()
{
    test m;
    m.show();
    test n;
    n.show();
    test r = m>n;
    r.show();
    return 0;
}