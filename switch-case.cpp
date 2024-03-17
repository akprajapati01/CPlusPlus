#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Input Your age: ";
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"You can drink";
        break;
    case 19:
        cout<<"You can drink";
        break;
    case 20:
        cout<<"You can drink";
        break;
    case 21:
        cout<<"You can drink";
        break;
    case 22:
        cout<<"You can drink";
        break;
    case 23:
        cout<<"You can drink";
        break;
    default:
        cout<<"You are not born yet";
        break;
    }
    return 0;
}