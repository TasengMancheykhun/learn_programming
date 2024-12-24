#include<stdio.h>
#define MAX 5

int top=-1;

void push(int b[],int num){
    if (top == MAX-1){
        printf("Stack is Full\n");
    }
    else{
        top++;
        b[top]=num;
    };
}

void pop(int b[]){
    if (top ==-1){
        printf("Stack is Empty\n");
    }
    else{    
        b[top]=0;
        top--;
    };
}

void display(int b[]){
    for(int i=0; i<MAX; i++){
      printf("%d ",b[i]);
    }
    printf("\n");
}

int main(){
  int a[MAX];
  int t;
  push(a,10);
  push(a,12);
  push(a,14);
  push(a,16);
  push(a,18);
  push(a,20);

  display(a);

  pop(a);

  display(a);  

  return 0;
}
