/*3. WAP to create a class employee that stores the name, basic salary & grade of an employee.
Overload the new operator to allocate memory and then stores the value. Also overload the delete
operator to deallocate the memory. Also add the user-defined constructors and destructors in
the program. Using the necessary member function, assign the name of employee using system-defined
variable & display it.*/

#include <iostream>
#include <string>
using namespace std;

class employee
{
    string name;
    char grade;
    int salary;
    public :
    employee(){salary = 0; grade = 0;}
    employee(string s, char ch, int x)
    {
        name = s;
        grade = ch;
        salary = x;
    }
    ~employee()
    {
        cout << "Destructed!" << endl;
    }
    void get()
    {
        cout << "Enter name, grade & salary respectively : " << endl;
        cin >> name >> grade >> salary;
    }
    void show()
    {
        cout << "Name = " << name << "\tGrade = " << grade << "\tSalary = " << salary << endl;
    }
    void * operator new(size_t size)
    {
        cout << "Overloading new operator" << endl;
        void *p = malloc(size);
        return p;
    }
    void operator delete(void *p)
    {
        cout << "Overloading delete operator!" << endl;
        free(p);
    }
};

int main()
{
    char ch;
    string s;
    int x;
    cout << "Enter name, grade & salary of employee : " << endl;
    cin >> s >> ch >> x;
    cout << s;
    employee *emp = new employee(s,ch,x);
    emp->show();
    delete emp;
    return 0;
}