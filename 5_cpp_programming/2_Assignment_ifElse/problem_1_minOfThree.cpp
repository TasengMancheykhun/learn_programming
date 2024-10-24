#include<iostream>
using namespace std;

int main(){
    int a=0, b=0,c=0;
    cout<<"Enter Three Numbers: \n";
    cin>>a>>b>>c;
    
    if (a<b&&a<c){
        cout<<a <<" is minimum ."<<endl;
    }else if (b<c&&b<a){
         cout<<b <<" is minimum ."<<endl;
    }else cout<<c <<" is minimum ."<<endl;
        
      
}
     
