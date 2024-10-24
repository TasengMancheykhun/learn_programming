#include<stdio.h>
#include<string.h>

void main(){
    char str1[30],str2[30];
    int length1=0,length2=0,status=1;
    printf("Enter string 1 : \n");
    scanf("%s",str1);
     printf("Enter string 1 : \n");
    scanf("%s",str2);
    for(length1=0;str1[length1]!='\0';length1++);
    for(length2=0;str1[length2]!='\0';length2++);
    if(length1==length2){
        for(int i =0;str1[i]!='\0';i++){
            if(str1[i]!=str2[i]){
                status=0;
                break;

            }
        }

    }//else{
    //    printf("Strings are not equal");
        
    //}
    if(status==0){
    printf("Strings are not equal\n");
    }else{
      printf("Strings are equal\n"); 
    }
  
    
    

}