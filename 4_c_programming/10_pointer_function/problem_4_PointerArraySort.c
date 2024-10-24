#include<stdio.h>

void sort(int *x[5]){

for(int i =0;i<=3;i++){
    for(int j=i+1;j<=4;j++)
    if(*x[i]>*x[j]){
        int t = *x[i];
        *x[i]=*x[j];
        *x[j]=t;
    }
}

}
void main(){
    int a[5],*pa[5];
     for(int i =0;i<=4;i++){
      pa[i]=&a[i];
    }
    rintf("Enter the Array Elements : ");
    for (int i =0;i<=4;i++){
      scanf("%d",pa[i]);
    
    }
    
    
    sort(pa);
    printf("the Array Elements after sort: ");
    for (int i =0;i<=4;i++){
      printf("%d\n",*pa[i]);

  }

}

