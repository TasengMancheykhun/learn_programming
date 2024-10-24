#include<stdio.h>

void main(){
   char vowel[10] = {'a','e','i','o','u','A','E','I','O','U'};
   char b[6] = {'s','h','a','r','m','a'};
   int i,j,count=0;

    for(i=0;i<=5;i++){

        for (j=0;j<=9;j++){
            if (b[i]==vowel[j]){
                count++;
            }

        }
       
    }

   printf("No. of Vowels in array : %d",count);
   
}