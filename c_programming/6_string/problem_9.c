#include <stdio.h>
#include <string.h>

void main(){

  char str1[20], str2[20];
  int cp=0,len1=0,len2=0;

  printf("Enter 1st string: \n");
  scanf("%s",str1);

  printf("Enter 2nd string: \n");
  scanf("%s",str2);

  len1=strlen(str1);
  len2=strlen(str2);
  printf("The length of 1st string is: %d and 2nd string is: %d\n",len1,len2);
  
  cp=strcmp(str1,str2);
  if (cp==0){
       printf("1st String %s and 2nd string %s are equal\n",str1,str2);
  }
  else if (cp<0){
       printf("1st String %s is less than 2nd string %s\n",str1,str2);
  }
  else{
       printf("1st String %s is greater than 2nd string %s\n",str1,str2);
  }
  
  strcpy(str1,str2);

  printf("After copy of 2nd string to 1st string: %s\n",str1);

  strcat(str1,str2);
  printf("The concatenate string is %s \n",str1);
  
}