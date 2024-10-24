#include<stdio.h>
#include<string.h>

void main(){
   char str1[20],t;
   int length=0,a=0,b=0;
   printf("Enter a string: \n");
   scanf("%s",str1);
   for (int i=0;str1[i]!='\0';i++)
      for (int j=i+1;str1[j]!='\0'; j++){
        a=str1[i];
        b=str1[j];
        if (a>b){
            t = str1[i];
            str1[i]=str1[j];
            str1[j]=t;
        }
       }
       printf("%s",str1);
    }

