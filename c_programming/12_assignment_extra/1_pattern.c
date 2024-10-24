#include <stdio.h>
#include <math.h>

void main(){
    int a, i,j;
    int result;

    printf("Enter the nth term: \n");
    scanf("%d",&a);
    

    for (i=0;i<=a;i++){
        for (j=0;j<=i;j++){
            result = pow(2,j);
            printf("%d ",result);
        }
        printf("\n");
    }
}