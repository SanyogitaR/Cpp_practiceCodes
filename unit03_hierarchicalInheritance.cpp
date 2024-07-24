#include<iostream>
using namespace std;

class parent{
    public:
    void getdataP(){   
    int a;
    cout<<"enter value for parent class-";
    }

};

class a:public parent{
    public:
    void getdataC(){   
    int a;
    cout<<"enter value for child a class-";
    }

};

class b:public parent{
     public:
    void getdataC(){   
    int a;
    cout<<"enter value for child a class-";
    }

};
int main(){
    a s;
    b p;
    s.getdataC();
    s.getdataP();

    p.getdataC();
    p.getdataP();

}