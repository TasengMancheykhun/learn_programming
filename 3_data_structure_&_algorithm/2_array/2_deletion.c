#include<stdio.h>
# define max 7;

int main(){
    int a[]={1,2,3,4,5};
    int pos,num,i;
    printf("Enter position where to delete: ");
    scanf("%d",&pos);

    for(i=pos;i<=4;i++){
        a[i]=a[i+1];
    }
    //a[pos]=num;

    for(int i =0 ;i<=4;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
