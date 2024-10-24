#include <stdio.h>
#include <string.h>

void main(){

  char str1[20], str2[20], concat[40];
  int i,j;

  printf("Enter 1st string: \n");
  scanf("%s",str1);

  printf("Enter 2nd string: \n");
  scanf("%s",str2);

   for (i=0;str1[i]!='\0';i++){
       concat[i]=str1[i];
   }
  
   for (j=0;str1[j]!='\0';j++,i++){
       concat[i]=str2[j];
   }

   concat[i]='\0';

   printf("The merged string using code is %s \n",concat);



   strcat(str1,str2);

   printf("The merged string using function strcat is %s \n",str1);
  
}