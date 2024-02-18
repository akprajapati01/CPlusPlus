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

    cout<<"The Sum of a + b = "<<c<<endl<<"The value of global c :"<<::c; //this is cascasding
    // 848.898f
    cout<<"The size of 34.43f is: "<<sizeof(34.34f)<<endl;
    cout<<"The size of 34.43F is: "<<sizeof(34.34F)<<endl;
    cout<<"The size of 34.43l is: "<<sizeof(34.34l)<<endl;
    cout<<"The size of 34.43L is: "<<sizeof(34.34L)<<endl;
    cout<<"The size of 34.43f is: "<<sizeof(34.34f)<<endl;
    cout<<"The size of 34 is: "<<sizeof(34)<<endl;

    return 0;
}