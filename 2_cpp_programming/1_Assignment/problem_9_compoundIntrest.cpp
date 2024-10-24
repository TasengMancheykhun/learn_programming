#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float principle=0,rate=0,time=0;
    float ci=0;
    cout<<"Enter Principle Amount:  ";
    cin>> principle;
    cout<<"Enter Intrest Rate: ";
    cin>> rate;
    cout<<"Enter Time: ";
    cin>> time;

    ci= principle*((pow((1+rate/100),time)))-principle;

    cout<<"Compound Interest is: "<<ci<<"\n\n";
    
    }
