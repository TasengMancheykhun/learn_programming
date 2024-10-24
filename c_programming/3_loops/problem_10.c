# include<stdio.h>
void main (){
    int num,var,choice=1,sqr,cube;
    //printf("Enter the number: ");
    //scanf("%d",&num);
    do {
    printf("\n1. Squre\n2. Cube");
    printf("\nEnter the choice : ");
    scanf("%d",&var);
    printf("Enter the number : ");
    scanf("%d",&num);
    if(var==1){
    sqr = num*num;
    printf("square of %d is : %d\n",num,sqr);
    }
    else if(var==2){
    cube= num*num*num;
    printf("Cube of %d is : %d\n",num,cube);
    }else{
            printf("Invalid inPut");
         }
    
    printf("\nIf you want to continue press 1 / 0 to stop : ");
    scanf("%d",&choice);
}while (choice == 1);
   
}

