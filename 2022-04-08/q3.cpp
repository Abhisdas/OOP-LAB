/*3. Write  a program in C++ to justify the use of default arguments that computes the
simple interest with default rate of interest as 8.5%.*/

#include <iostream>
using namespace std;
float interest(int p, int t, float r=8.5)
{
    return (p*r*t)/100.0;
}
int main()
{
    int principal,time;
    float rate;
    double si;
    cout << "Input the principle :" << endl;
    cin >> principal;
    cout << "Input the time (in years) :" << endl;
    cin >> time;
    cout << "Enter the interest rate :" << endl;
    cin >> rate;
    si=interest(principal,time);
    cout << "By using default argument :" << endl;
    cout << "Simple Interest = " << si << endl;
    si=interest(principal,time,rate);
    cout << "By passing all the arguments :" << endl;
    cout << "Simple Interest = " << si << endl;
    return 0;
}