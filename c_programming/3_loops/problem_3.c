# include<stdio.h>
void main (){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (int i=1;i<=10;i++){

            printf("%d,",num*i);
    }
}