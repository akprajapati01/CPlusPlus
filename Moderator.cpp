#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=4,b=68,c=796;

    //Moderator
    cout<<"The Value of a is :"<<a<<endl;
    cout<<"The Value of a is :"<<b<<endl;
    cout<<"The Value of a is :"<<c<<endl;

    cout<<"The Value of a is setw :"<<setw(6)<<a<<endl;
    cout<<"The Value of a is setw :"<<setw(6)<<b<<endl;
    cout<<"The Value of a is setw :"<<setw(6)<<c<<endl;

    return 0;
}