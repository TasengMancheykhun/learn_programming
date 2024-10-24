
#include <stdio.h>
#include <string.h>

void main(){

  char str[20]="virat",ch='i';
  int i,j,length=2;

  printf("Enter a string: \n");
 scanf("%s",str);

  printf("Enter length of sub-string: \n");
  scanf("%d",&length);

  printf("Enter starting character: \n");
  scanf(" %c", &ch); 


   for (i=0; str[i]!='\0'; i++){
      if (str[i]==ch){
        for (j=0; j<length && str[i + j] != '\0'; j++){
           printf("%c",str[i+j]);
        }
      }
   }
  

}