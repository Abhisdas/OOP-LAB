/*2.write  a program to create a class employee having employee name, department name, id , 
monthly salary as its member. Initialize the details by accepting input from keyboard and user 
defined parametrized constructor function. Create a user defined copy constructor to copy the 
properties of one instance to another and display the details by calling a friend function.*/

#include <iostream>
#include <string>
using namespace std;
class employee
{
    string name,dep;
    int id, salary;
    public:
    employee()
    {
        cout << "Enter id, name, department name & salary respectively :" << endl;
        cin >> id >> name >> dep >> salary;
    }
    employee(int x, string s, string dept, int sal)
    {
        id = x;
        name = s;
        dep = dept;
        salary = sal;
    }
    employee(employee &k)
    {
        name = k.name;
        dep = k.dep;
        id = k.id;
        salary = k.salary;
    }
    friend void show(employee s)
    {
        cout << "ID = " << s.id << "\tName = " << s.name << "\tDep = " << s.dep;
        cout << "\nSalary = " << s.salary << endl; 
    }
};

int main()
{
    int id,sal;
    string name,dep;
    cout << "Employee 1:" << endl;
    cout << "Enter id : ";
    cin >> id;
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter department name : ";
    cin >> dep;
    cout << "Enter salary : ";
    cin >> sal;
    employee e1(id,name,dep,sal);
    show(e1);
    cout << endl << endl;
    employee e2(e1);
    show(e2);

    return 0;
}