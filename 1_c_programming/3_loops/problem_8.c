# include<stdio.h>
void main (){
    int num,rem=1,rev=0;
    printf("Enter the number: ");
    scanf("%d",&num);

    while(num>0){
        rem=num%10;
        num=num/10;
        rev=rev*10+rem;
        
    }
    printf("Reverse of the number is :%d ",rev);
}