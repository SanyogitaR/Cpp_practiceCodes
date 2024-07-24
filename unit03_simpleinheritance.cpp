#include <iostream>
// #include<conio.h>
using namespace std;

class xyz
{
public:
    int m;
    void getdata()
    {

        cout << "enter the value of m-" << endl;
        cin >> m;
    }
};

class abc : public xyz
{
public:
    void showdata()
    {
        cout << "show value of m-" << m << endl;
    }
};

int main()
{
    abc s;
    s.getdata();
    s.showdata();
    // s.getdata();
    return 0;
}