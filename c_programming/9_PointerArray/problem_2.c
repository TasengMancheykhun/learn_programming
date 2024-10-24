#include<stdio.h>

void main(){
    int num1[5],num2[5],add[5],*pn1,*pn2;
    pn1=num1;
    pn2=num2;
    printf("Enter five element of first array : \n");
    for(int i =0;i<5;i++,pn1++){    
        scanf("%d",pn1);
    }

    printf("Enter five element of second array : \n");
    for(int i =0;i<5;i++,pn2++){   
        scanf("%d",pn2);
    }
    // pn1=num1;
    // pn2=num2;
    // for(int i =0;i<5;i++){
    //     *pn1=*pn2;
    //     pn1++;
    //     pn2++;
    // }

        pn1=num1;
        pn2=num2;
    for(int i=0;i<5;i++){
      
        pn1[i]=pn2[i];
    }
    
    printf("\n Num1: \n");
    for(int i =0;i<5;i++){
        printf("%d\t",num1[i]);
    }

   
}

