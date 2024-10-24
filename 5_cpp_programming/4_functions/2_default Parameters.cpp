#include<iostream>
using namespace std;
int add (int a=50,int b=30,int c=34 ){
    return a+b+c;
}
int main(){
    int x=5,y=10,result;
    result = add();
    cout<< result<<endl;
      result = add(x);
  cout<< result<<endl;
      result = add(y);
    cout<< result<<endl;
      result = add(x,y);
   cout<< result<<endl;

    
    return 0;
}