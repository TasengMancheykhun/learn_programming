#include<iostream>
using namespace std;

int main(){
    char a[15]={'a','e','i','o','u'};
    cout<<"Elements of Char Array using For Each Loop:"<<endl;
  for (char i:a){
        cout<<i<<'\t';

    }
    return 0;
}