#include<iostream>
using namespace std;

int main(){
    int a[7],ec=0,od=0;
    cout<<"Enter array:"<<endl;
    for (int i=0;i<7;i++){
        cin>>a[i];
    }
    
    for (int i:a){
        if(i%2==0){
            ec++;

        }else
        od++;

    }
            
    cout<<"Count Of Even No. : "<<ec<<endl;
    cout<<"Count Of Odd No. : "<<od<<endl;

    return 0;
}