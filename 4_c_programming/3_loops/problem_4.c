# include<stdio.h>
void main (){
    int n1=1,n2=1;

    //printf("Enter the number: ");
    //scanf("%d",&num);
    for (int i=1;i<=10;i++){

            printf("%d,%d,",n1,n2);
            n1=n1+n2;
            n2=n1+n2;
    }
}