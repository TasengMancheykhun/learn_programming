# include<stdio.h>
void main (){
    int num,fact=1,rem=0;
    printf("Enter the number: ");
    scanf("%d",&num);

    for (int i=num;i>=1;i--){
        fact*=i;
      
            
    }
    printf("%d! : %d ",num,fact);
}