#include <stdio.h>

void main(){
    int a[10]={2,4,7,8,9,3,44,7,88,87};
    int b[10]={12,49,78,81,19,73,4,71,8,17};
    int c[10];

    int *pa, *pb, *pc;

    pa = a;
    pb = b;
    pc = c;

    for (int i=0;i<10;i++){
        pc[i] = pa[i]+pb[i];
    }

    printf("The array 'c' becomes: \n");
    for (int i=0;i<10;i++){
        printf("%d ",pc[i]);
    }

}