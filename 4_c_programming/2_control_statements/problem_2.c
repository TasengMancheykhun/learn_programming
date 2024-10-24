#include<stdio.h>
void main(){
    int a,b,c,avg;
    printf("Enter marks of three subjects: ");
    scanf("%d%d%d",&a,&b,&c);
    
    avg=(a+b+c)/3;
    if(avg>50)
         printf("PASS");
    else 
        printf("FAIL");
    

}