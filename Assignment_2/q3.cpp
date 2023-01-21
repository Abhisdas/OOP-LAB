/* 3. WAP to input the roll number of a student from keyboard and display to output screen 
if all the following constraints are satisfied,otherwise manage withproper exceptions. 
i) first two digits of the roll number must be last two digits of current year(yyyy)
ii) roll number should be all numeric and exactly 7 digits long. 
iii) last three digits of roll number can not be all zero */

#include <iostream>
using namespace std;


int main()
{
    static int curr_year = 2022;
    long int roll;
    cout << "Enter roll no. :" << endl;
    cin >> roll;
    try
    {
        if(roll > 9999999 || roll < 1000000)
            throw 0;
        if(roll / 100000 != curr_year % 100)
            throw 1;
        if(!(roll % 1000))
            throw 2;
    }
    catch(int x)
    {
        if(!x)
        {
            cout << "Roll number should be all numeric and exactly 7 digits long." << endl;
            exit(0);
        }
        if(x == 1)
        {
            cout << "First two digits of the roll number must be last two digits of ";
            cout << "current year(yyyy)" << endl;
            exit(0);
        }
        if(x == 2)
        {
            cout << "Last three digits of roll number can not be all zero" << endl;
            exit(0);
        }

    }
    
    cout << "Roll entered is : " << roll << endl;
    return 0;
}