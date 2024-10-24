#include<stdio.h>

void main(){
    int number[9]={55,12,14,89,56,12,34,45,12};
    int search,count=0;
    printf("Enter number to search in : ");
    scanf("%d",&search);
    for(int i =0;i<9;i++){
        if(number[i]== search)
        count++;
    }
    printf("%d is %d times in array",search,count);
}