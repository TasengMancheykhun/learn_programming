#include<iostream>
#include<cmath>
using namespace std;
void variable(){
    int var1=30;
    cout<<"Local Value of Variable: "<<var1<<endl;
}
int main(){
    int var1=50;
    cout<<"Global Value of Variable: "<<var1<<endl;
    variable();
    
    }
