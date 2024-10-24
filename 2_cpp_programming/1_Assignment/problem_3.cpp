#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a=0,b=0,choice=0;
    cout<<"Enter Two numbers:\n";
    cin>>a>>b;
    cout<<"+++++++++++++\n";
    cout<<"1.Addition\n"<<"2.Subtraction\n"<<"3.Multiplication\n"<<"1.Division\n"<<"5. power calculation \n"<<"Enter choice : \n";
    cout<<"+++++++++++++\n";

    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<a+b;
        break;
    case 2:
        cout<<a-b;
        break;
    case 3:
        cout<<a*b;
        break;
    case 4:
        cout<<(float) a/(float)b;
    case 5:
     cout<<pow(a,b);
     break;
    default:
     cout<<"Invalid choice";
        break;
    }






}