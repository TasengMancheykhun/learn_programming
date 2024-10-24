#include<iostream>
using namespace std;

void swap(int &x, int &y){
    int t;
    t=x;
    x=y;
    y=t;

}
int main(){
    int a,b;
    int &c=a;
    int &d=b;
    
    cout<<"Value of a:"<<endl;
    cin>>a;
    cout<<"Value of b:"<<endl;
    cin>>b;
    swap(c,d);
    cout<<"<<<<<<<<<<<<< VALUE AFTER SWAPPING >>>>>>>>>>>>>>>>>"<<endl;
    cout<<"Value of a:"<<a<<endl;
    cout<<"Value of b:"<<b<<endl;


 
        
      
}
     
