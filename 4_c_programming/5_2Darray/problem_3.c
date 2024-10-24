#include<stdio.h>

void main(){
    int a[3][3] = {{10,20,30},{40,50,60},{70,80,90}};
    int b[3][3] = {{10,20,30},{40,50,60},{70,80,90}};
    int c[3][3];
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
            }
            printf("\n");
      
    }
}
  