#include<stdio.h>
int read(){
     int n1=0;
    printf("Enter no. : ");
    scanf("%d",&n1);
    return n1;
}
int sum(int a){
    int add=1;
    if(a==1)
        return 1;
    else
      add= a+sum(a-1);
     
   return add;  
 
}

void print(int a,int b){
   printf("sum of %d natural no : %d\n\n",a,b);

}
int main(){
   int n1=0,n2=0,result=0;
  n1=read();
  result=sum(n1);
  print(n1,result);
    
    return 0;
}