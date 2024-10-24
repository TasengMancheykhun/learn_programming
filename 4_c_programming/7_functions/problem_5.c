#include<stdio.h>
int sum(int arr[3][3]){
    int sum =0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum+= arr[i][j];
        }
        
    }
    return sum;
}
void print(int x){
     printf("Sum of array elements  : %d\n",x);

}
int main(){
   int x[3][3],result=0;
    printf("Enter array element by row wise : ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&x[i][j]);
        }
        
    }
    result=sum(x);
    print(result);
    
    return 0;
}