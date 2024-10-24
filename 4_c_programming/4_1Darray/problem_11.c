#include<stdio.h>

void main(){
    printf("ASCII VALUES FOR LOWER AND UPPER ALPHABETS : \n");
  for ( int i =65, j=97;i<=90 || j<=122;i++,j++){
    printf("%c : %d\t%c : %d \n",i,i,j,j);
  }
//   printf("ASCII VALUES FOR LOWER AND UPPER ALPHABETS : ");
//    for ( int i =97;i<=122;i++){
//     printf("%c : %d\n",i,i);
//   }
// 
}