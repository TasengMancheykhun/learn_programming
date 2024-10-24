#include<stdio.h>
void main(){
int length ,breadth ;
float area,perimeter;
length = 15;
breadth = 30;
area = (float)(length * breadth);
perimeter = 2* (float)(length+breadth);
printf("Area of rectangle : %f\n",area);
printf("Perimeter of rectangle : %f\n",perimeter);
}
