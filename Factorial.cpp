#include<iostream>
using namespace std;
int main(){
    int n,f=1;
    cout<<"Welcome To Factorial Calculator\n";
    cout<<"Input Any Number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    cout<<"Factorial of "<<n<<" is = "<<f;


}