#include<iostream>

using namespace std;
int main(){
    int n,i,j;
    cout<<"Input any Number: ";
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=i;j<=n;j++){
            cout<<j;
        }
        cout<<"\n";
    }
}