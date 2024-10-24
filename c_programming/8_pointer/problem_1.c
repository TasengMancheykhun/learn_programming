#include<stdio.h>
int main(){

  int a=10, *pa;

  pa=&a;

  printf("Value of a is %d\n",*pa);

  printf("Address of a is %p\n",pa);

return 0;
}

