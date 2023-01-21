/*2. WAP to create a class "library" that stores the details of a book like name of book, name of the
author & no. of pages. Derive a class "publisher" that stores the name of the publisher & year of
publication. By using the necessary function, input and display the details by justifying runtime 
binding. Deallocate all the respective memories after the details are displayed.*/

#include <iostream>
#include <string>
using namespace std;

class library
{
    protected :
    string book,author;
    int pages;
    public : 
    virtual void input()=0;
    virtual void output()=0;
    virtual ~library()
    {
        cout << "\nBase class destructed!" << endl << endl;
    }
};
class publisher : public library
{
    protected :
    string publish;
    int year_publish;
    public :
    void input()
    {
        cout << "Enter name of book : ";
        cin >> book;
        cout << "Enter name of author : ";
        cin >> author;
        cout << "Enter total no. of pages : ";
        cin >> pages;
        cout << "Enter name of publisher and year of publication : " << endl;
        cin >> publish >> year_publish;
    }
    void output()
    {
        cout << "\nName of book : " << book << "\tName of author : " << author;
        cout << "\tTotal pages : " << pages << endl;
        cout << "\nName of publisher : " << publish << "\tYear of publishing : " << year_publish << endl;

    }
    ~publisher()
    {
        cout << "\nDerived class destructed!" << endl;
    }
};

int main()
{
    library *obj = new publisher;
    obj->input();
    obj->output();
    delete obj;
    return 0;
}