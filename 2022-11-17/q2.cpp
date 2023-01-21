/*2. WAP to create a file which stores the first name of the student entered by the user 
from keyboard. Input the surname from keyboard  & also append the existing content of the
file. Read the full name of the student from file & print to output screen.(There should
be space between first name & surname).*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string fname;
    cout << "Enter first name : " ;
    cin >> fname;
    ofstream out("abcd.txt");
    out << fname;
    out.close();
    string lname;
    cout << "Enter surname : ";
    cin >> lname;
    out.open("abcd.txt",ios::app);
    out << " ";
    out << lname;
    out.close();
    ifstream in("abcd.txt");
    string name;
    getline(in,name,'\n');
    cout << name;
    return 0;

}