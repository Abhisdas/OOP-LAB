/*1.write a program  to create a  class  student having name , roll number and subject mark as its 
member. Initialize the details of two students at the time of creation where the name and subject 
marks are decided at the time of creation. Deallocate the memory by creating user defined destructor.*/

#include <iostream>
#include <string>
using namespace std;

class student
{
    int roll{},*mark{},sub{};
    char *name{};
    public :
    student()
    {
        int n;
        cout << "Enter roll : ";
        cin >> roll;
        cout << "Input the no. of characters in the name including space : ";
        cin >> n;
        name = new char[n];
        cout << "Enter Name : ";
        cin >> name;
        cout << "Input the no. of subjects : ";
        cin >> sub;
        mark = new int[sub];
        cout << "Enter marks : ";
        for(int i=0; i<sub; i++)
        cin >> mark[i];
    }
    ~student()
    {
        cout << "Object Destructed" << endl;
    }
    void show()
    {
        cout << "Roll = " << roll << "\tName = " << name << endl;
        cout << "Marks : ";
        for(int i=0; i<sub; i++)
        cout << mark[i] << " ";
        cout << endl;
    }
};

int main()
{
    student s[2];
    s[0].show();
    s[1].show();
    return 0;
}