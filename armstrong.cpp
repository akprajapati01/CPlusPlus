#include<iostream>
#include<math.h>
using namespace std;
int main(){
int num,i,a,s,check,ch,sum;
cout<<"Input any number :";
cin>>num;
check=num;
while (num>0)
    {
        s=num%10;
        ch=s*s*s;
        sum=sum+ch;
        num=num/10;

    }
    
if(check==sum)
{
    cout<<"Armstrong number";
}
else{
    cout<<"Not Armstrong Number";
}
    return 0;
}