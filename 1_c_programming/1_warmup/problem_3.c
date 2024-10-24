#include<stdio.h>
void main(){
int no1,no2,sum,sub,mul;
float div;
printf("Enter no1 and no2 : ");
scanf("%d%d",&no1,&no2);
sum = no1 +no2;
sub = no1 -no2;
mul = no1 * no2;
div = (float)no1/ (float)no2;

printf("Addition of %d and %d is %d \n",no1,no2,sum);
printf("Subtraction of %d and %d is %d\n ",no1,no2,sub);
printf("multiplication of %d and %d is %d\n ",no1,no2,mul);
printf("Division of %d and %d is %f \n",no1,no2,div);

}