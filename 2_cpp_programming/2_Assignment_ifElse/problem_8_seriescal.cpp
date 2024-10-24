#include<iostream>
using namespace std;

int main(){
    int a=0, b=0, i, sum=0;
    cout<<"Enter the nth term: \n";
    cin>>a;
    for (i=1;i<=a;i++){
        sum +=i;
        if (a==1){
            cout<<i<<'='<<i<<endl;
        }
        for (int j=1;j<=i;j++){
            if (j==i)   
               cout<<j;
            else
               cout<<j<<"+";
    }
    cout<<"="<<sum<<endl;
    
}}
     
