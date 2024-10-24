#include<stdio.h>

void main(){
    int number[9]={55,12,14,89,56,12,34,45,12};
    int search,count=0,*pnum,*psear,*pcount;
    pnum = number;
    psear=&search;
    pcount=&count;
    printf("Enter number to search in : ");
    scanf("%d",psear);
    for(int i =0;i<9;i++){
        if(pnum[i]== *psear)
        *pcount+=1;
    }
    printf("%d is %d times in array",*psear,*pcount);
}