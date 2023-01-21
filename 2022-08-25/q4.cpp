/*Q.2 Write a program to create a class “student” that stores the name,roll, age of a student. Create
another class “mark” which stores the three subject marks and grade. Input the details of a student 
by using necessary member function. Print all the details by making a member function of “mark” 
class friendly to “student” class.*/

#include <iostream>
#include <string>
using namespace std;
class student;
class mark
{
    int m[3];
    char grade[3];
    public :
    void get()
    {
        cout << "Enter marks & grade in 3 subjects :" << endl;
        for(int i=0; i<3; i++)
        {
        cout << "Subject " << i+1 << " : ";
        cin >> m[i];
        cout << "Grade " << i+1 << " : ";
        cin >> grade[i];
        }
    }
    void put(student);
}; 
class student
{
    int roll;
    string name;
    int age;
    public :
    void get()
    {
        cout << "Enter roll, name & age respectively :" << endl;
        cin >> roll >> name >> age;
    }
    friend void mark::put(student);
};

void mark::put(student x)
{
    cout << "Roll = " << x.roll << " Name = " << x.name << " Age = " << x.age << endl;
    cout << "Marks : " << endl;
    for(int i=0; i<3; i++)
    {
    cout << "Subject " << i+1 << " : " << m[i];
    cout << "\tGrade " << i+1 << " : " << grade[i] << endl;
    }
        
}
int main()
{
    student s;
    mark m;
    s.get();
    m.get();
    m.put(s);
    return 0;
}