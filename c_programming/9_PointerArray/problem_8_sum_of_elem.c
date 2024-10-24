#include <stdio.h>
int main(){

    int a[5],*pa, i, sum=0;
    pa=a;
 
    printf("Enter 5 elements of the array: \n"); 
    for (i=0;i<5;i++){
        scanf("%d",&pa[i]);
    }

    for (i=0;i<5;i++){
        sum+=pa[i];
    }

    printf("The sum of ");
    for (i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("is %d\n",sum);

    return 0;
}