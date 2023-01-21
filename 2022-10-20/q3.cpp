/*3. wap to create a class employe that stores the employ name age and monthly salary overload the
 binary + operator to add user defined incentive to the monthly salary and display it 
i) object+incentive value
ii)incentive+object*/

#include <iostream>
using namespace std;

class employee
{
    char *name;
    int age, salary;
    public :
    employee()
    {
        cout << "Enter name, age & salary respectively : " << endl;
        cin >> name >> age >> salary;
    }
    void show()
    {
        cout << "Name : " << name << "\tAge : " << age << "\tSalary : " << salary << endl;
    }
    friend void operator+(employee &a, int incent)
    {
        a.salary += incent;
    }
    friend void operator+(int incent, employee &a)
    {
        a.salary += incent;
    }

};

int main()
{
    int incent;
    employee emp;
    emp.show();
    cout << "Enter the value of incentive : ";
    cin >> incent;
    cout << "Object + incentive value : " << endl;
    operator+(emp,incent);
    emp.show();
    cout << "Incentive value + object : " << endl;
    operator+(incent,emp);
    emp.show();
    return 0;
}