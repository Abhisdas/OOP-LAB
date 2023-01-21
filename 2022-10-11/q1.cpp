/*1.WAP to create a file that stores the name of the student which is entered by the user from the 
keyboard*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string name;
    cout << "Enter name : ";
    getline(cin,name,'\n');
    cout << "Name entered is : " << name << endl;
    ofstream out("efgh.txt");
    out << name;
    out.close();
    return 0;
}