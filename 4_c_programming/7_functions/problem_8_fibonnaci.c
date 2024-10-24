#include<stdio.h>
int read(){
     int n1=0;
    printf("Enter no. : ");
    scanf("%d",&n1);
    return n1;
}

int fibonacci(int a ,int b){
   
    if(b<50){
   printf("%d,%d,",a,b);
    a=a+b;
    b=a+b;
    fibonacci(a,b);
    
    }
}

void print(int a,int b){
   printf("%d ! : %d\n\n",a,b);

}

int main(){
   int n1=0,n2=0,result=0;
  n1=read();
  n2=read();
  fibonacci(n1,n2);
  //print(n1,result);
    
    return 0;
}