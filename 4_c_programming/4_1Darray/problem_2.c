#include<stdio.h>

void main(){
    int number[5]={55,12,14,89,56};
    for(int i =0;i<5;i++){
        printf("%d\n",number[i]);
    }
    printf("The reverse array : \n");
    for(int i =4;i>=0;i--){
        printf("%d\n",number[i]);
    }
}