#include<iostream>
using namespace std;
int main(){
    int a=34;
    cout<<"The Value of a was : "<<a<<endl;
    a=98;
    cout<<"The Value of a is : "<<a<<endl; //Here the value of a gets updated
    // Constant in C++
    const int b=10;
    cout<<"The Value of b is : "<<b<<endl; //Here the value of b did not gets updated because b is constant value
    return 0;

}