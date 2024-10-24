#include<stdio.h>

void main(){
    // int a[3][3],*pa;
    // pa=&a[0][0];
    // printf("Enter 3x3 matrix row wise :  \n");
    // for(int i=0;i<=2;i++){
    //     for(int j=0;j<=2;j++){
    //         scanf("%d",pa[i][j]);
    //     }
    // }

    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},*pa;
    pa=&a[0][0];
    printf("Enter 3x3 matrix row wise :  \n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++,pa++){
            scanf("%d",&pa[i][j]);
        }
    }


    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++,pa++){
            printf("%d\t",*pa);
        }
        printf("\n");
    }
}