#include<stdio.h>
#include<string.h>

void main(){
    char str1[30];
    printf("Enter string: \n");
    scanf("%s",str1);
    int length=0,len=0;
    for(length=0;str1[length]!='\0';length++);
    printf("String length: %d\n",length);
    len=strlen(str1);
     printf("String by using function length: %d\n",len);

}