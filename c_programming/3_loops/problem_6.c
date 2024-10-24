# include<stdio.h>
void main (){
    int num,sum=0,rem=0;
    printf("Enter the number: ");
    scanf("%d",&num);

    for (int i=1;i<=5;i++){
        rem=num%10;
        sum += rem;
        num=num/10;

            
    }
    printf("sum of the digits in number is :%d ",sum);
}