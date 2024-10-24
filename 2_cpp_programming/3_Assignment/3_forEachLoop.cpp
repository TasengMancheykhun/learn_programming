#include<iostream>
using namespace std;

int main(){
    int a[10]={1,4,56,7,4,34,67,89,90,45};
    cout<<"Elements of Array using For Each Loop:"<<endl;
  for (int i:a){
        cout<<i<<'\t';

    }
    return 0;
}