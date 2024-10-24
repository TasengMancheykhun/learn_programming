#include<stdio.h>
#include<string.h>

void main(){
    char str1[]="thisis123isnumber";
    for(int i=0;str1[i]!='\0';i++){
        
 //       printf("%c",str1[i]);

          if(str1[i]<=122 && str1[i]>=65){
            printf("%c is an alphabet \n",str1[i]);
          }
          else{
             printf("%c is digit \n",str1[i]);
          }
    }
  


}