#include<stdio.h>
int main(){

  int a=10, *pa;
  pa=&a;

  printf("Value of pointer of int a is %d\n",pa);

  pa++;
  printf("Value of pointer after increment by 1 is %d\n",pa);
  
  pa--;
  printf("Value of pointer after decrement by 1 is %d\n",pa);

  printf("Value of a is :%d\n",*pa);
  
  pa+=5;
  printf("Value of pointer after increment by 5 is %d\n",pa);

  printf("Value of a is :%d\n",*pa);
return 0;
}

