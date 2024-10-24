#include<iostream>
using namespace std;

int main(){
    int a[3][3],min=0;
    cout<<"Enter array:"<<endl;
    for (int i=0;i<3;i++){
        for(int j =0;j<3;j++){
        cin>>a[i][j];
        }
    }
    min=a[0][0];
   for (int i=0;i<3;i++){
        for(int j =0;j<3;j++){
        if(a[i][j]<min){
            min = a[i][j];
        };
        }
    }
    cout<<"Smallest Element In the Array : "<< min <<endl;

    
            
    

    return 0;
}