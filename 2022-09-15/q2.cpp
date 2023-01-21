/*2. considering  question 1 details, students and marks are two independent classes. Derive a class
"grade" from "student" and "marks" which is having grade as its member. 
IF avgmark>90 (grade O) .....avg mark<90 and avg mark > 80 ( grade B) else assign grade as C. 
Input the details and display all the details of a student.*/

#include <iostream>
#include <string>
using namespace std;

class student
{
    protected :
    int roll;
    string name, section;
};

class marks
{
    protected :
    int mark[3];
    double avg{};
};

class grades : protected student, marks
{
    char  grade;
    public :
    grades()
    {
        cout << "Enter roll, name & section respectively :" << endl;
        cin >> roll >> name >> section;
        cout << "Enter marks :" << endl;
        for(int i=0; i<3; i++)
        {
            cin >> mark[i];
            avg += mark[i];
        }
        avg /= 3;
        if(avg > 90)
        grade = 'O';
        else if(grade > 80)
        grade = 'B';
        else
        grade = 'C';
    }
    void show()
    {
        cout << "\nRoll = " << roll << "\tName = " << name << "\tSection = " << section << endl;
        cout << "Marks are : ";
        for(int i=0; i<3; i++)
        cout << mark[i] << " ";
        cout << endl << "Average = " << avg << endl;
        cout << "Grade = " << grade << endl;
    }
};

int main()
{
    grades s;
    s.show();
    return 0;
}