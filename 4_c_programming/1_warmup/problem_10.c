#include<stdio.h>
void main(){
int a =999,rem;
int one,two,three,sum;
one = a%10;
rem = a/10;
two = rem%10;
three = rem/10;
sum=one+two+three;

printf("Additon of digits in %d is : %d",a,sum);
}
