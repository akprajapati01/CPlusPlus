#include<iostream>
using namespace std;
int main(){
    int i;
    int k=1;
    for(i=0;i<5;i++)   //This is Simple For loop statement
    {
        cout<<i<<" ";
    }
    cout<<endl;
    int j=2;
    while(j<10)
    {
        cout<<j<<" ";
        j++;
    }
    cout<<endl;
    do
    {
        cout<<k<<" ";
        k++;
    } while (k<20);
    
    return 0;
}