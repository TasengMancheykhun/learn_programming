#include<stdio.h>
int read(){
     int n1=0;
    printf("Enter first no. : ");
    scanf("%d",&n1);
    return n1;
}
int total(int a,int b,int c){
    return a+b+c;
}
float avg(int a,int b,int c){
    return (a+b+c)/3;
}
void print(int a, int b, int c){
     printf("Total of three suject : %d\n",total(a,b,c));
     printf("Average of three suject : %f\n",avg(a,b,c));

}
int main(){
   int sub1=0,sub2=0,sub3=0,result=0;
  sub1=read();
  sub2=read();
  sub3=read();
print(sub1,sub2,sub3);

    
    return 0;
}