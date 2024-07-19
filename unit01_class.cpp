#include <iostream>
#include <conio.h>
using namespace std;
class person{
    int age;
    char name[30];
    public:
    void seedata();
    void putdata(){
        cout<<"enetr your name-"<<endl;
        cin>>name;
        cout<<"enter your age-"<<endl;
        cin>>age;
    };
};
void person::seedata(void){
    cout<<"name is-"<<name<<"\n"<<"age is-"<<age<<"\n"<<endl;
}
int main()
{
    person s;
    s.putdata();
    s.seedata();

}