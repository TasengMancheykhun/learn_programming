#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string s ="Virat",f="kohli";

    cout<<"Length o f"<<s<<" is : "<<s.length()<<endl;


    cout<<"After Appending "<<s<<" in "<< f <<" updated string is : "<<s.append(f)<<endl;
    
    string r = s.substr(3, 5);
 cout<<"Substring in "<<s<<" is : "<<r<<endl;
    
    cout<<s.find("at")<<endl;

    cout<<s.replace(2,3,"las")<<endl;


    return 0;
}