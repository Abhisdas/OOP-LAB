/*3. WAP to create a class employee having name, age, grade, emp id & monthly salary of
an employee. Input the details from the keyboard & assign using necessary member function.
Store the details of employee 1 to the file & then read those details to another employee
& print the details to output screen by calling member functions.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class employee
{
    string name ;
    int age, empid ;
    char grade ;
    double salary;
    public :
    void get()
    {
        cout << "Enter name, age, employee id, grade & salary respectively :" << endl;
        cin >> name >> age >> empid >> grade >> salary;
    }
    void show()
    {
        cout << "Name = " << name << "\tAge = " << age << "\tEMP ID = " << empid << endl;
        cout << "Grade = " << grade << "\tSalary = " << salary << endl;
    }
    void write()
    {
        ofstream out("emp.bin",ios::app);
        out.write((char *)&name, sizeof(name));
        out.write((char *)&age, sizeof(age));
        out.write((char *)&empid, sizeof(empid));
        out.write((char *)&grade, sizeof(grade));
        out.write((char *)&salary, sizeof(salary));
        out.close();
    }
    void read()
    {
        ifstream in("emp.bin");
        in.read((char *)&name, sizeof(name));
        in.read((char *)&age, sizeof(age));
        in.read((char *)&empid, sizeof(empid));
        in.read((char *)&grade, sizeof(grade));
        in.read((char *)&salary, sizeof(salary));
        in.close();
    }
};


int main()
{
    employee e1;
    e1.get();
    cout << endl << "Employee 1" << endl;
    e1.show();
    e1.write();
    employee e2;
    e2.read();
    cout << endl << "Employee 2" << endl;
    e2.show();
    return 0;
}