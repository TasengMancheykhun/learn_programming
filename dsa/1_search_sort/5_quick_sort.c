#include<stdio.h>

void printArr(int arr[], int n);

int split(int a[], int lower, int upper)
{
    int p,q,pivot,temp;
    p=lower+1; q=upper; pivot=a[lower];

    printf("\n BEFORE p=%d q=%d pivot=%d,upper=%d,lower=%d\n",p,q,pivot,upper,lower);
    printArr(a,4);

    while(q>=p)
    {
        while(a[p]<pivot)
        {
            printf("\n inside p, p=%d q=%d a[p]=%d \n",p, q, a[p]);
            p++;
        }

        while(a[q]>pivot)
        {
            printf("\n inside q, p=%d q=%d a[q]=%d \n",p, q, a[q]);
            q--;
        }

        if (q>p)
        {
            printf("\n yes\n");
            temp=a[p];
            a[p]=a[q];
            a[q]=temp;
        }
    
    // printf("\n after iteration \n");
    // for (int x=0;x<10;x++)
    //     printf("%d ",a[x]);    
    }
    temp = a[lower];
    a[lower] = a[q];
    a[q] = temp;


    printf("\n AFTER p=%d q=%d pivot=%d,upper=%d,lower=%d\n",p,q,pivot,upper,lower);
    printArr(a,4);
    //exit(0);
    return q;
}

void quicksort(int a[], int lower, int upper)
{
    int i;
    if(upper>lower)
    {
        i=split(a,lower,upper);
        quicksort(a,lower,i-1);
        quicksort(a,i+1,upper);
    }
}


void printArr(int arr[], int n)
{
    for (int i=0; i<=n; i++)
    {
        printf("%d ", arr[i]);
    }    
    printf("\n");
}

int main()
{
    int a[] = {26, 1, 12, 7, 8}; int n=4;

    printf("Before sorting array elements are - \n");
    printArr(a, n);
    quicksort(a, 0, n);
    printf("\nAfter sorting array elements are -\n");
    printArr(a,n);
    return 0;
}