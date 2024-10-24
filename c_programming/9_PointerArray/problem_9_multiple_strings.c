#include <stdio.h>

int main(){
    char a[3][10],*pa[3];
    int i;

    for (i=0;i<3;i++){
        pa[i] = a[i];
    }

    printf("Enter 3 strings to create array of strings: \n");
    for(i=0;i<3;i++){
        scanf("%s",pa[i]);
    }

    printf("Array of strings: \n");
    for(i=0;i<3;i++){
        printf("%s\n",pa[i]);
    }
    return 0;
}