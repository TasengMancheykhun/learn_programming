#include<stdio.h>

void main(){
    int a[3][3] = {{10,20,30},{40,50,60},{70,80,90}};
    int sum=0;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            sum+= a[i][j];
        }
        
    }
    printf("sum of all elements: %d \n",sum);
}