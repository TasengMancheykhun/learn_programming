#include<stdio.h>
int min(int a []){
    int min =a[0];
    for(int i=0;i<5;i++){
     if(a[i]<min){
        min = a[i];
     }
    }
    return min;
}
int max(int a []){
    int max =a[0];
    for(int i=0;i<5;i++){
     if(a[i]>max){
        max = a[i];
     }
    }
    return max;
}
void print(int x,int y){
     printf("minimum of array elements  : %d\n",x);
     printf("maximum of array elements  : %d\n",y);

}
int main(){
   int x[5],a=9,b=0;
    printf("Enter array no. : ");
    for(int i=0;i<5;i++){
         scanf("%d",&x[i]);
    }
    a = min(x);
    b = max(x);
    print(a,b);

    
    return 0;
}