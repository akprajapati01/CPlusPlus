#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Input no of days of week :";
    cin>>day;
    switch(day)
    {
        case 1:
        {
            cout<<"Monday";
            break;
        }
        case 2:
        {
            cout<<"Tuesday";
            break;
        } 
        case 3:
        {
            cout<<"Wednsday";
            break;
        }
        case 4:
        {
            cout<<"Thrusday";
            break;
        }
         case 5:
        {
            cout<<"Friday";
            break;
        }
         case 6:
        {
            cout<<"Saturday";
            break;
        }
         case 7:
        {
            cout<<"Sunday";
            break;
        }
        default:
        {
            cout<<"Input Correct no of days ";
            break;
        }
        
    }
    return 0;
}