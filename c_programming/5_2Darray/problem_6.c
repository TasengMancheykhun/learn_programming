#include<stdio.h>

void main(){
    int a[5][5] = {{10,20,30,40,50},{40,50,60,100,110},{70,80,90,120,130},{18,170,160,150,140},{280,210,123,150,112}};
    int max=a[0][0];
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            if(max<a[i][j]){
                max=a[i][j];      
            }
        }
        
    }
    printf("maximum no in matrix : %d\n",max);
}