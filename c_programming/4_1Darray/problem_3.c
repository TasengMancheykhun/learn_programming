#include<stdio.h>

void main(){
    int number[5]={1,2,3,4,5};
    int sum=0;
    for(int i =0;i<5;i++){
       sum += number[i]; 
    }
    printf("SUM of Array : %d",sum);
}