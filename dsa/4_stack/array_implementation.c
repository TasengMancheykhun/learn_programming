#include<stdio.h>
#define MAX 10

int top=-1;

void push(int b[],int num){
    if (top == MAX-1){
        printf("Stack is Full....");
    }
    else{
    top++;
    b[top]=num;
    };
}
void pop(int b[]){
    if (top ==-1){
        printf("Stack is Empty..");
    }
    else{
    
    b[top]=0;
    top--;
    };
}
int main(){
  int a[MAX];
  int t;
  push(a,10);
  push(a,10);
  push(a,10);
  push(a,10);
  push(a,10);
  push(a,10);
  push(a,10);
  push(a,10);
  push(a,10);
  push(a,10);
  push(a,10);
  //pop(a);

  for(int i =0;i<MAX;i++){
    printf("%d\t",a[i]);
  }
  

  
  return 0;
}