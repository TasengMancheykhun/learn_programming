#include<stdio.h>
int read(){
     int n1=0;
    printf("Enter first no. : ");
    scanf("%d",&n1);
    return n1;
}
int add(int a,int b){
    return a+b;
}
int subs(int a, int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
float div(int a, int b){
    return a/b;
}
void print(int a,int b){
    int n1=a,n2=b;
 printf("Addition of %d and %d is : %d\n",n1,n2,add(n1,n2));
  printf("Subtraction of %d and %d is : %d\n",n1,n2,subs(n1,n2));
  printf("Multiplication of %d and %d is : %d\n",n1,n2,mul(n1,n2));
  printf("Division of %d and %d is : %f\n",n1,n2,div(n1,n2));

}
int main(){
   int n1=0,n2=0,result=0;
  n1=read();
  n2=read();
  print(n1,n2);
    
    return 0;
}