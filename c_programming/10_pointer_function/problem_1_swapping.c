#include<stdio.h>

void swap(int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t;
}


void main(){
    int a =2 ,b=4, *pa, *pb;

    pa = &a;
    pb = &b;
    swap(pa,pb);
    printf("value of a : %d\n",a);
    printf("value of b : %d\n",b); 

}


