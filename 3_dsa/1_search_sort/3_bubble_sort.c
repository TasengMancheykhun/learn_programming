#include<stdio.h>
#define MAX 15

// Bubble sort
int main()
{ 
    int a[MAX];
    int nos=10;
    printf("Enter %d elements of the array: \n",nos);
    for (int i=0;i<nos;i++)
        scanf("%d",&a[i]);

    for (int i=0;i<nos-1;i++)
        {
            for (int j=0;j<nos-i-1;j++)
            {
                if (a[j] > a[j+1])
                {
                    int t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
                printf("i=%d, j=%d, a[i]=%d, a[j]=%d \n",i,j,a[i],a[j]);
            }
        }      

    printf("The sorted array using Bubble sort is: \n");
    for (int i=0;i<nos;i++)
        printf("%d ",a[i]);

    printf("\n");
    return 0;
}