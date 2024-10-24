#include<stdio.h>

void calculator(int x ,int y,int *pad,int *ps,int *pml,float *pd){
   *pad = x+y;
   *ps = x-y;
   *pml = x*y;
   *pd = x/y;

}
void main(){
    int a =10 ,b=5,add,sub,mul;
    float div;

calculator(a,b,&add,&sub,&mul,&div);
 
printf("value of a : %d\n",a);
printf("value of b : %d\n",b);
printf("value of add : %d\n",add);
printf("value of subs : %d\n",sub);
printf("value of mul : %d\n",mul);
printf("value of division : %f\n",div);
     

}

