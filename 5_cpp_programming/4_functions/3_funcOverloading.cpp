#include<iostream>
 using namespace std;
 
int add (int a,int b,int c){
    return a+b+c;
}
float add(float i,float j){
    return i+j;
}
int main(){
    int x=5,y=10,z=45,result;
    float m=3.24,n=5.28,fresult;
    result = add(x,y,z);
    cout<< result<<endl;
    fresult=add(m,n);
    cout<< fresult<<endl;

    
    return 0;
}