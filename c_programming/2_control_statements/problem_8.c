#include<stdio.h>
void main(){
    int a,b,c,avg;
    printf("Enter marks of three subjects: ");
    scanf("%d%d%d",&a,&b,&c);
    
    avg=(a+b+c)/3;
    if(avg>=70)
         printf("Grade A");
    else if(avg>=60 && avg<70)
         printf("Grade B");
     else if(avg>=50 && avg<60)
         printf("Grade C");
    else 
        printf("FAIL");
    

}