#include<stdio.h>

void main(){
   
   int arr[5] = {5,3,10,8,1};
    int i,j,t;

    for (i=0;i<=3;i++){

       for (j=i+1;j<=4; j++){

        if (arr[i]>arr[j]){
            t = arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
       }
    }

    printf("Sorted array: \n");
    for (i=0;i<=4;i++){
        printf("%d,",arr[i]);
    }



}