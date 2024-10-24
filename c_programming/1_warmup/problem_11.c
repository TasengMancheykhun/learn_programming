#include<stdio.h>
void main(){
int no1,no2,three;
no1 =1;
no2 =2;

printf("Before: no1=%d, no2=%d\n",no1,no2);

no1 = no1 + no2;
no2 = no1 - no2;
no1 = no1 - no2;

printf("After: no1=%d, no2=%d\n",no1,no2);


}