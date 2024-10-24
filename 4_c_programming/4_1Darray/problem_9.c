#include<stdio.h>

void main(){
   char a[6] = {'v','i','s','h','a','l'};
   char b[6] = {'s','h','a','r','m','a'};
   char c[12];
   int i,j;

    for(i=0;i<=5;i++){
        c[i]=a[i];
    }

    for(j=0;j<=5;i++,j++){
        c[i]=b[j];
    }

    printf("Merged Array: \n");
    for(j=0;j<=11;j++){
        printf("%c,",c[j]);
    }
   
}