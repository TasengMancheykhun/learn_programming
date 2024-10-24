#include<stdio.h>
int read(){
     int n1=0;
    printf("Enter first no. : ");
    scanf("%d",&n1);
    return n1;
}
int factorial(int a){
    int fact=1;
    if(a==1)
        return 1;
    else
      fact= a*factorial(a-1);
     
   return fact;  
 
}

void print(int a,int b){
   printf("%d ! : %d\n\n",a,b);

}
int main(){
   int n1=0,n2=0,result=0;
  n1=read();
  result=factorial(n1);
  print(n1,result);
    
    return 0;
}