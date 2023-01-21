/*1.(i) WAP to create a class employee that stores the grade (A,B or C) and monthly salary of an 
employee. Overload the unary increment and decrement operator using member function and friend 
function respectively where the pre form of the unary operator is applied.
(ii) In the above example, perform the post decrement using friend function and pre increment using 
member function and display the values.*/

#include <iostream>
using namespace std;

class employee
{
    char grade;
    int salary;
    public :
    employee(){}
    employee(char ch, int x){grade = ch; salary = x;}
    void show()
    {
        cout << "Grade : " << grade << "\tSalary : " << salary << endl;
    }
    void get()
    {
        cout << "Enter grade and salary : " << endl;
        cin >> grade >> salary;
    }
    void operator++()
    {
        ++salary;
    }
    friend void operator--(employee &e)
    {
        e.salary--;
    }
    friend employee operator--(employee e,int k)
    {
        return employee(e.grade,--e.salary);
    }
};

int main()
{
    employee emp;
    emp.get();
    emp.show();
    cout << "Pre increment : " << endl;
    ++emp;
    emp.show();
    cout << "Pre decrement :" << endl;
    emp = operator--(emp,0);
    emp.show();
    cout << "Post decrement :" << endl;
    operator--(emp);
    emp.show();
}