/*1. WAP to copy the contents of one file to another in reverse order.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Input the string : " << endl;
    getline(cin,s,'\n');
    ofstream out;
    out.open("abcd.txt");
    out << s;
    out.close();
    out.open("efgh.txt");
    ifstream in;
    in.open("abcd.txt");
    in.seekg(-1,ios::end);
    int len = in.tellg();
    char ch;
    while(len >= 0)
    {
        in.seekg(len--,ios::beg);
        in.get(ch);
        out << ch;
    }
    in.close();
    out.close();
    return 0;
}