#include<stdio.h>

void main(){
    int number[5]={55,12,14,89,56};
    int min=number[0],max=number[0];
    for(int i =0;i<5;i++){
        if(number[i]>max)
        {
            max=number[i];
        }
        

        if(number[i]<min)
        {
            min=number[i];
        }
        
    } 

  
    printf("Maximum no is : %d \n",max);
    printf("Minimun no is : %d \n",min);
}