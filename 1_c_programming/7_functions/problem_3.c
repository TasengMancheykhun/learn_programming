#include<stdio.h>
int sum(int a []){
    int sum =0;
    for(int i=0;i<5;i++){
     sum = a[i]+sum;
    }
    return sum;
}
void print(int x[]){
     printf("Sum of array elements  : %d\n",sum(x));

}
int main(){
   int x[5];
    printf("Enter array no. : ");
    for(int i=0;i<5;i++){
         scanf("%d",&x[i]);
    }
    print(x);

    
    return 0;
}