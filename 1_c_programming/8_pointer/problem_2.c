#include<stdio.h>
int main(){

  int a=1, b=5, *pa, *pb;

  pa=&a;
  pb=&b;

  *pa=*pa+*pb;
  *pb=*pa-*pb;   
  *pa=*pa-*pb; 

  printf("Value of a is %d\n",*pa);
  printf("Value of b is %d\n",*pb);

return 0;
}

