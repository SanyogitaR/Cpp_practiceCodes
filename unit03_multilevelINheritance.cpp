#include<iostream>
using namespace std;


class a{
    public:
    void display1()
    {
        cout << "i am a ";
    }

};

class b:public a{
public:
    void display2()
    {
        cout << "i am b ";
    }
};

class c :public b{
    public:
    void display3()
    {
        cout << "i am c ";
    }

};

int main(){       
c sample;
sample.display3();
sample.display2();
sample.display1();


}
   
