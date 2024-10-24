#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c)
         printf("%d is maximum",a);
        else
             printf("%d is maximum",c);

       }
    else {
        if(b>c)
            printf("%d is maximum",b);
        else
            printf("%d is maximum",c);
    }
    
    

}