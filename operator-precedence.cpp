#include<iostream>
using namespace std;
int main(){
    int a=5, b=7;
    float c,d;
    c=2*23/68*32+2;
    cout<<c<<endl;
    //Here All operation takes place according to operator precedence
    d=2*(23/68)*(32+2);
    cout<<d;

    return 0;
}