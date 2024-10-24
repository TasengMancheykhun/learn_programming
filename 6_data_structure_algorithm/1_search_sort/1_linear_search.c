#include <stdio.h>
#define MAX 15


int main()
{
    int a[MAX], search, found=0, index=0;

    printf("Enter elements of Array: \n");
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);

    printf("Enter number to search \n");
    scanf("%d",&search);

    // Linear Search
    for (int i=0;i<10;i++)
    {
        if (search == a[i])
        {
            found=1;
            index=i;
            break;
        }
    }
    
    if (found==1)
        printf("The number \'%d\' is at %d positon of the array\n",search,index+1);
    else
        printf("The number \'%d\' is not in the array\n",search);

    return 0;
}
