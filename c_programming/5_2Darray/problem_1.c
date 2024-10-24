#include<stdio.h>

void main(){
    int a[3][3];
    printf("Enter 3x3 matrix row wise :  \n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}