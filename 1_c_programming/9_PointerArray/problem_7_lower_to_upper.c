#include <stdio.h>

int main(){
    char a[30], *pa;
    
    pa = a;

    printf("Enter a string: \n");
    scanf("%s",pa);

    for (pa=a;*pa!='\0';pa++){
        if (*pa>=65 & *pa <=90){
            *pa+=32;
        }
        else if (*pa>=97 & *pa <=122){
            *pa-=32;
        }       
    }
 
    printf("The changed string is %s\n",a);

    return 0;
}