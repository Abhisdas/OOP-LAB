/*2.Write a pogram to add one static and one non static data member to user defined class and
access them by static and non static member functions respectively.*/

#include <iostream>
#include <string>

using namespace std;
class student
{
    int roll;
    static int school_code;
    public:
    void get()
    {
        cout << "Enter roll :" << endl;
        cin >> roll;
    }
    void show()
    {
        cout << "Roll = " << roll << endl;
    }
    static void input()
    {
        cout << "Enter school code :" << endl;
        cin >> school_code;
    }
    static void output()
    {
        cout << "School code = " << school_code <<endl;
    }
};
int student::school_code;

int main()
{
    student s1;
    s1.get();
    s1.show();
    s1.input();
    s1.output();
    return 0;
}