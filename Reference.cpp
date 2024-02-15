#include<iostream>
using namespace std;
int c=69;
int main(){
    int a,b,c;
    cout<<"Input The Value of a:"<<endl;
    cin>>a;
    cout<<"Input The Value of b:"<<endl;
    cin>>b;
    c=a+b;
    cout<<"The Sum of a + b = "<<c<<endl;
    cout<<"The value of global c :"<<::c<<endl;

    cout<<"The Sum of a + b = "<<c<<endl<<"The value of global c :"<<::c;
    return 0;
}