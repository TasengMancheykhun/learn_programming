#include<stdio.h>
int main(){

  int a=10,*pa,**x;
  float b=1.12,*pb,**y;
  char c='f',*pc,**z;
  pa=&a;
  pb=&b;
  pc=&c;
 
  x=&pa;
  y=&pb;
  z=&pc;

  printf("Value of int a by using chain **x is %d\n",**x);
  printf("Value of float b by using chain **y is %f\n",**y);
  printf("Value of char c by using chain **z is %c\n",**z);

//   printf("---------\n");
//   printf("%d\n",pa);
//   printf("%d\n",*x);
//   printf("%d\n",x);

 return 0;
}

