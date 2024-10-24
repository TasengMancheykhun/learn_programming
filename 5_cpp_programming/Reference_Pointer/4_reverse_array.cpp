#include <iostream>
using namespace std;

int reverse(int);

int main(){
    int a[5],b[5];
    
    for (int i=0;i<5;i++){
        cin>>a[i];
    }

    b[5]=reverse(a);

    return 0;
}



int reverse(int a[5]){
    int b[5];
    for (int i=4;i>=0;i--){
        b[i] = a[i];
    }
    return b;
}