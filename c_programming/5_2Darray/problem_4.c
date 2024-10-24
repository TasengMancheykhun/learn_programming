#include<stdio.h>

void main(){
    int a[2][3] = {{10,20,30},{40,50,60}};
    int T[3][2];
    for(int i=0;i<=2;i++){
        for(int j=0;j<=1;j++){
            T[i][j]=a[j][i];
            }     
     
    }
   
    for(int i=0;i<=2;i++){
        for(int j=0;j<=1;j++){
            printf("%d\t",T[i][j]);
            }
        printf("\n");
    }
}
  