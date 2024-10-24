#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float principle=0,rate=0,time=0;
    float si=0;
    cout<<"Enter Principle Amount:  ";
    cin>> principle;
    cout<<"Enter Intrest Rate: ";
    cin>> rate;
    cout<<"Enter Time: ";
    cin>> time;

    si= principle*rate*time/100;
    cout<<"Simple Interest is: "<<si<<"\n\n";
    
    }
