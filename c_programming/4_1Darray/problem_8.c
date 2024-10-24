#include<stdio.h>

void main(){
   char C[6] = {'v','i','s','h','a','l'};
    for(int i =0;i<6;i++){
        C[i]=C[i]-32;

    }

    for(int j =0;j<6;j++){
       
       printf("%c",C[j]);

    }
   
}