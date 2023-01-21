/*WAP to read the contents of a file, print to monitor and also write to another file.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream in("efgh.txt");
    string str;
    getline(in,str,'\n');
    cout << str;
    ofstream out("abcd.txt");
    out << str;
    out.close();
    return 0;
}