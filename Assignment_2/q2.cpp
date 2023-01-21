//2. WAP to read the contents of a file in reverse order and print to another file.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : " << endl;
    getline(cin, str, '\n');
    ofstream out("abcd.txt");
    out << str;
    out.close();
    ifstream in("abcd.txt");
    out.open("efgh.txt");
    in.seekg(-1, ios::end);
    int len = in.tellg();
    char ch;
    while(len >= 0)
    {
        in.seekg(len--,ios::beg);
        in.get(ch);
        out << ch;
    }
    
    return 0;
}