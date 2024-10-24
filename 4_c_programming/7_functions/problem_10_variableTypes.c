#include<stdio.h>
void f1();
void f2();
int gv =50;

int main(){
    printf("Before global variable is : %d\n",gv);
    f1();
    printf("after global variable is : %d\n",gv);

    for(int i=0; i<3; i++){
        f2();
    }
}

void f1(){
    int lv=50;
    printf("in function global var is %d\n",gv);
    gv=30;
    printf("in function local variable is %d\n",lv);
}

void f2(){
    static int x;
    x=x+10;
    printf("static x value is %d\n",x);
}