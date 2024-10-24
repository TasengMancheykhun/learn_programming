#include<stdio.h>

void main(){
    int num1[5],num2[5],add[5];
    
    printf("Enter five element of first array : \n");
    for(int i =0;i<5;i++){    
        scanf("%d",&num1[i]);
    }

    printf("Enter five element of second array : \n");
    for(int i =0;i<5;i++){   
        scanf("%d",&num2[i]);
    }

    for(int i =0;i<5;i++){
        add[i]=num1[i]+num2[i];
    }
    
    printf("\n Num1: \n");
    for(int i =0;i<5;i++){
        printf("%d\t",num1[i]);
    }

    printf("\n Num2: \n");
    for(int i =0;i<5;i++){
        printf("%d\t",num2[i]);
    }

    printf("\n Add: \n");
    for(int i =0;i<5;i++){
        printf("%d\t",add[i]);
    }
}

