#include<iostream>
using namespace std;
int sum(int a,int b,int c=3,int d=7){
return a+b+c+d;
}
int main(){
    cout<<"the sum is-"<<sum(2,5)<<endl;
    cout<<"the sum is-"<<sum(2,5,4)<<endl;
    cout<<"the sum is-"<<sum(2,5,8,11)<<endl;
    
    cout<<"the sum is-"<<sum(2,5,0);


}