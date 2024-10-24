#include<stdio.h>

void main(){
   
    int a[5] = {5,3,10,8,1}, *pa;
    int i,j,t;
    pa=a;

    for (i=0;i<=3;i++){

       for (j=i+1;j<=4; j++){

        if (pa[i]>pa[j]){
            t = pa[i];
            pa[i]=pa[j];
            pa[j]=t;
        }
       }
    }

    printf("Sorted array: \n");
    for (i=0;i<=4;i++){
        printf("%d,",pa[i]);
    }



}