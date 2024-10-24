#include<stdio.h>

void main(){
    int number[5]={1,2,3,4,5};
    int sum=0,*pa;
    pa=number;

    for(int i=0; i<5; i++,pa++){
       sum += *pa; 
    }
    printf("Sum of Array : %d",sum); 
}