#include<stdio.h>
#define MAX 15

int main()
{
    int a[MAX], search, found=0, index=0;
    int start,end,mid;
    int nos=10;

    printf("Enter %d elements of Array: \n",nos);
    for(int i=0;i<nos;i++)
    scanf("%d",&a[i]);

    printf("Enter number to search \n");
    scanf("%d",&search);
 
    for (int i=0; i<nos-1; i++)
    {
       for (int j =i+1;j<nos;j++){     
       if (a[j]<a[i])
       {
          int t = a[i];
          a[i] = a[j];
          a[j] = t;
       }

      } 
    }

    for(int i=0;i<nos;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");


    start=0,end=nos-1;
    // Binary Search
    while(start<=end)
    {    
        mid=(start+end)/2;
        if (search == a[mid])
        {
            found=1;
            index=mid;
            break;
        } 

        if (search<a[mid])
        {            
            end=mid-1;
        }

        if (search>a[mid])
        {
            start = mid+1;
        }
    }
    
    if (found == 1) 
        printf("The number %d is in the array at %d\n",search, index);
    else
        printf("The number %d is not in the array\n",search);   

    return 0;
}