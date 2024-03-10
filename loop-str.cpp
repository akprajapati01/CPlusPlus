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
    do
    {
        cout<<k<<" ";
        k++;
    } while (i>9);
    
    return 0;
}