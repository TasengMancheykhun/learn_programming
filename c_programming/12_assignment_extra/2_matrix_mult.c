#include <stdio.h>

void main(){
    int a[5][5], b[5][5], c[5][5];
    int r1,c1,r2,c2;

    printf("Enter size of matrix 'a': \n");
    scanf("%d",&r1);
    scanf("%d",&c1);

    printf("Enter elements of matrix 'a' row-wise: \n");
    for (int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }


    printf("Enter size of matrix 'b': \n");
    scanf("%d",&r2);
    scanf("%d",&c2);

    printf("Enter elements of matrix 'a' row-wise: \n");
    for (int i=0;i<r2;i++){
        for (int j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }



    for (int i=0;i<r1;i++){
        for (int j=0;j<c2;j++){
            c[i][j]=0;

            for (int k=0;k<r2;k++){
            c[i][j] += a[i][k]*b[k][j];
        }
    }
    }

    printf("The resultant matrix after matrix multiplication is: \n");
    for (int i=0;i<r1;i++){
        for (int j=0;j<c2;j++){
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }

}