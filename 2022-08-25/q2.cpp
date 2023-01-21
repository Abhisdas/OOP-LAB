/*WAP to create a class employee having the name, age, id, department name and salary of the employee.
Assign the values for 2 employees and display them.
1. First employees details are input by the user from keyboard at the time of creation.
2. Second employee details are also input by the user from keyboard where the details are dynamically
initialised.*/

#include <iostream>
#include <string>
using namespace std;

class employee
{
    char *name{};
    int age;
    int id;
    string dept;
    int salary;
    public :
    employee()
    {
        name = new char;
        cout << "Enter ID, Name, Age, Department name and Salary respectively :" << endl;
        cin >> id >> name >> age >> dept >> salary; 
    }
    employee(int n)
    {
        name = new char[n];
        cout << "Enter ID, Name, Age, Department name and Salary respectively :" << endl;
        cin >> id >> name >> age >> dept >> salary; 
    }
    void show()
    {
        cout << "ID = " << id << "\tName = " << name << "\tAge = " << age << endl;
        cout << "Department = " << dept << endl;
        cout << "Salary = " << salary << endl;
    }
};

int main()
{
    employee e1;
    int n;
    cout << "Enter the no. of characters in the name of employee : ";
    cin >> n;
    employee e2(n);
    e1.show();
    e2.show();
    return 0;
}