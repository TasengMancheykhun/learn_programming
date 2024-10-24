#include<stdio.h>
int length(char a []){
    int len =0;
       for(len=0;a[len]!='\0';len++);
     
    return len;
}
void print(int x){
     printf("Length of string : %d\n",x);

}
int main(){
   char c[20],result=0;
    printf("Enter string : ");
    scanf("%s",c);
    result = length(c);
    print(result);
    
    return 0;
}