#include <stdio.h>

int read()
    {
        int a;
        scanf("%d",&a);

        return a;
    }


int power(int a, int b)
    {
        int mul=1;
        for (int i = 1; i<=b; i++){
            mul*=a;              
        }

        return mul;
    }

void print(int a, int b, int c)
    {
        printf("The value of %d ^ %d is %d\n",a,b,c);
    }

void main(){
      int x,y,mul;

      printf("Enter base number: \n");
      x=read();

      printf("Enter exponent number: \n");
      y=read();

      mul=power(x,y);

      print(x,y,mul);
}