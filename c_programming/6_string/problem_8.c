#include <stdio.h>
#include <string.h>

void main(){

  char str[20];
  int i,j,length=0,status=1;

  printf("Enter string: \n");
  scanf("%s",str);
  
  for(length=0;str[length]!='\0';length++);

  for (i=0,j=length-1;i<j;i++,j--){
    if (str[i]!=str[j]){
        status=0;
        break;
    }
  }

  if (status==0){
    printf("string is not palindrome\n");
  }
  else{
    printf("string is a palindrome\n");
  }

}