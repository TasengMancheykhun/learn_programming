#include<stdio.h>
#include<string.h>

void string_manipulate(char *x, char *y, int *plen, int *status, char *concat){

    int len1=0, len2=0;
    int i,j;

    // length of strings using pointers    
    for (len1=0,i=0;x[i]!='\0';i++,len1++); 
    *plen=len1;

    for (len2=0,i=0;x[i]!='\0';i++,len2++); 
            
    // compare using pointers
    if(len1==len2){
        for(i=0;x[i]!='\0';i++){
            if(x[i] != y[i]){
                *status=0;
                break;
            }
            }
    }

    //concatenate string using pointers
    for (i=0;x[i]!='\0';i++){
         concat[i]=x[i];
    }
    
    for (j=0;y[j]!='\0';j++,i++){
        concat[i]=y[j];
    } 

    // copy using pointers  
    for (i=0;x[i]!='\0';i++){
        x[i]=y[i];
    }  
}


int main(){ 
    char a[20], b[20], concat[50];
    int len, status=1;


    printf("Enter string 1: \n");
    scanf("%s",a);

    printf("Enter string 2: \n");
    scanf("%s",b);
    
    string_manipulate(a,b,&len,&status,concat);

    printf("length of string 1 is %d\n",len); 

    if(status==0){
        printf("Strings are not equal\n");
    }
    else{
            printf("Strings are equal\n");
        }

    printf("The concatenated string is %s \n",concat);

    printf("string 1 after copy becomes: %s\n",a); 


    return 0;
}