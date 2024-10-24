#include<iostream>
 using namespace std;
 
int area (int a,int b){
    return a*b;
}
float area(int r){
    return 3.14*r*r;
}
int main(){
    int x=5,y=10,result;
    int radii=10;
    float fresult;
    result = area(x,y);
    cout<<"Area of Rectangle :"<<result<<endl;
    fresult=area(radii);
    cout<<"Area of Circle :"<<fresult<<endl;

    
    return 0;
}