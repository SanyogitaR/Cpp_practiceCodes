#include <iostream>
using namespace std;

class parent1
{
public:
    void dispaly1()
    {
        cout << "i am parent 1";
    }
};

class parent2
{
public:
    void display2()
    {
        cout << "i am parent 2";
    }
};

class child : public parent1, public parent2
{
public:
    void display3()
    {
        cout << "i am child";
    }
};
int main()
{
    child a;
    a.dispaly1();
    a.display2();
    a.display3();
    return 0;
}