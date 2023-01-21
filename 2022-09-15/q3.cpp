/*3.write a program to create a class employee having employee name ,age and id as is member. Derive 
a class from employee in private mode. having department name and department id as its private number.
 Derive a class grade from department having grade (a or b) and basic salary of an employee.Input 
 the details of the employee and display.*/

 #include <iostream>
 #include <string>
 using namespace std;

 class employee
 {
    protected :
    string name;
    int id, age;
    public :
    void input()
    {
        cout << "Enter ID, Name & age respectively :" << endl;
        cin >> id >> name >> age;
    }
    void output()
    {
        cout << "ID = " << id << "\tName = " << name << "\tAge = " << age << endl;
    } 
 };

 class department : private employee
 {
    int dept_id;
    string dept_name;
    public :
    void get()
    {
        input();
        cout << "Enter department id : ";
        cin >> dept_id;
        cout << "Enter department name : ";
        cin >> dept_name;
    }
    void put()
    {
        output();
        cout << "Dept id = " << dept_id << "\tDept name = " << dept_name << endl;
    }
 };

 class grade : protected department
 {
    int basic_pay;
    char grade;
    public :
    void get()
    {
        department::get();
        cout << "Enter basic salary : ";
        cin >> basic_pay;
        cout << "Enter grade (a or b) : ";
        cin >> grade;
        while(grade != 'a' && grade != 'b')
        {
            cout << "Enter valid grade : ";
            cin >> grade;
        }
    }
    void put()
    {
        department::put();
        cout << "Basic salary = " << basic_pay << endl;
        cout << "Grade = " << grade << endl;
    }
 };

 int main()
 {
    grade s;
    s.get();
    s.put();
    return 0;
 }