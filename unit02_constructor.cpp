#include<iostream>
#include<conio.h>
using namespace std;
int count=0;
class example{
    int a, b;
    public:
    example(){
        a=10;
        b=20;
        cout<<"constructor is called"<<"\n"<<count++<<endl;

        cout<<"the value of a is-"<<a<<endl;
        cout<<"the value of b is-"<<b<<endl;


    }
    };
    int main()
    {
        example s1,s2;


    }