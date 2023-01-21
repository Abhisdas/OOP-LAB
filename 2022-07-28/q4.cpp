/*4. WRITE A PROGRAM TO CREATE A CLASS STUDENT HAVING NAME,ROLL,AGE,SECTION-NAME AND
5 SUBJECT MARKS OF A STUDENT. INPUT THE DETAILS OF 3 STUDENTS AND DISPLAY ALL THE DETAILS 
ALONG WITH AVERAGE MARK USING NECESSARY MEMBER FUNCTIONS.aLSO USE ONE OF THE FUNCTIONS AS 
A NON INLINE FUNCTION.*/

#include <iostream>
#include <string>
using namespace std;

class student
{
    int roll,age,marks[5];
    string name,section;
    double avg;
    public:
    void input()
    {
        cout << "Enter roll, name, age, section name & marks respectively :" << endl;
        cin >> roll >> name >> age >> section;
        for(int i=0;i<5;i++)
        cin >> marks[i];
    }
    void output();
};
void student::output()
{
    int sum=0;
    for(int i=0; i<5; i++)
    sum+=marks[i];
    avg=sum/5.0;
    cout << "Roll : " << roll << "\tName : " << name ;
    cout << "\tAge : " << age << "\nMarks : ";
    for(int i=0; i<5; i++)
    cout << marks[i] << " ";
    cout << "\nAverage Mark : " << avg << endl;
}
int main()
{
    student s[3];
    int i;
    for(i=0; i<3; i++)
    s[i].input();
    cout << endl;
    for(i=0; i<3; i++)
    {
        s[i].output();
        cout << endl;
    }

    return 0;
}