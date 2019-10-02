#include<iostream>
#include<conio.h>
using namespace std;
class a
{
public:
    void aa()
    {
        cout<<"first class\n";
    }

};
class b
{
public:
    void bb()
    {
        cout<<"second class\n";
    }

};
class c:public a,public b
{
public:

    c()
    {
        aa();
        bb();
        cout<<"third class\n";
    }

};
int main()
{
    c obj;
    getch();
}

