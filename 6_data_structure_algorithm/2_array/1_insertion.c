#include<stdio.h>
# define max 7;

int main(){
    int a[]={1,2,3,4,5};
    int pos,num,i;
    printf("Enter position and number to insert : ");
    scanf("%d %d",&pos,&num);

    for(i=4;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=num;

    for(int i =0 ;i<6;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}