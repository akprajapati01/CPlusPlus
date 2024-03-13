#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"Input Your age  :";
    cin>>i;
    if(i>=18)
    {
        cout<<"Can vote";
    }
    else{
        cout<<"Cannot vote";
    }
    return 0;
}