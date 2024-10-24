#include<iostream>
using namespace std;

int main(){
    int a=0, b=0, i, sum=0;
    cout<<"Enter two Numbers: \n";
    cin>>a>>b;
    
    if (a>b){
        a=a+b;
        b=a-b;
        a=a-b;
        for (i=a;i<=b;i++){
           sum +=i;
           }
        cout<<"Sum of numbers from "<<a<<" to "<<b<<" is "<<sum<<endl;
        }
    else
        {
        for (i=a;i<=b;i++){
             sum +=i;
           }
        cout<<"Sum of numbers from "<<a<<" to "<<b<<" is "<<sum<<endl;
        }
}
     
