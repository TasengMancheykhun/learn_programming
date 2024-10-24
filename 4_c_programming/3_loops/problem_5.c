# include<stdio.h>
void main (){
    int num,flag=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
         if(num%i==0)
            flag++;
    }
    //printf("%d",flag);


     if (flag>2){
        printf("%d is not a prime number ",num);
     }
     else
      printf("%d is a prime number ",num);

}