#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"input any value of :";
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