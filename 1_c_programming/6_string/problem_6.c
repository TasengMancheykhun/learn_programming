#include <stdio.h>
#include <string.h>

void main(){

  char str1[20], str2[20];

  printf("Enter 1st string: \n");
  scanf("%s",str1);

  printf("Enter 2nd string: \n");
  scanf("%s",str2);

  strcpy(str1,str2);

  printf("After copy of string 2 to string 1, string 1 is %s \n",str1);
  
}