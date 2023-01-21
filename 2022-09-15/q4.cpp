/*4.Write a program in C++ to create a class "library" having total no. of books and department name
as its member. Create another class "student" which stores student details like name, roll no, 
section , year of admission. These above two classes are derived from a class "university" which is 
having university name, total strength of student as its private member. Input all the details and 
display using user defined member function?*/

#include <iostream>
#include <string>
using namespace std;

class university
{
    private :
    string uni_name;
    int total;
    public :
    void get()
    {
        cout << "Enter University Name : ";
        cin >> uni_name;
        cout << "Enter total strength of college : ";
        cin >> total;
    }
    void put()
    {
        cout << "University Name : " << uni_name << endl;
        cout << "Total no. of students : " << total << endl;
    }
};

class library :virtual protected university
{
    private:
    int total_books;
    string dept;
    public :
    void get()
    {
        university::get();
        cout << "Input total no. of books : "; 
        cin >> total_books;
        cout << "Enter department name : ";
        cin >> dept;
    }
    void put()
    {
        university::put();
        cout << "Total no. of books = " << total_books << endl;
        cout << "Department Name = " << dept << endl;
    }
};

class student :virtual protected university
{
    int roll,year;
    string name,section;
    public:
    void get()
    {
        cout << "Enter roll, name , section & year of admission :" << endl;
        cin >> roll >> name >> section >> year;
    }
    void put()
    {
        cout << "Roll = " << roll << "\tName = " << name << "\tSection = " << section;
        cout << "\nYear of admission = " << year << endl;
    }
};

int main()
{
    library l;
    student s;
    l.get();
    s.get();
    l.put();
    s.put();

    return 0;
}