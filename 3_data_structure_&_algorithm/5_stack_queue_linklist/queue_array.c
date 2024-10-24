#include <stdio.h>
int MAX =10;
int rear=-1,front=-1;
int a[10];



void insert()
{
   int val;
   printf("Enter number to insert : ");
   scanf("%d",&val);
    if(rear == MAX-1){
        printf("Array IS full .\n");}
    else
    {
        if (front == -1 && rear == -1){
            front=0;
            rear=0;
        }
        else{
        rear++;
        }
        a[rear]=val;
    }

}

void delete()
{
  if (front == -1 || front>rear){
    printf("Array is empty...\n");
  }
else{
    if(front==rear){
        front=-1;
        rear=-1;
    }
    else{
        front++;
    }
}
}


void display()
{
    int i;
    for(i=front;i<=rear;i++){
        printf("%d\n",a[i]);
    }
}



int main()
{
   int choice, cont=1;
   

   do {
        printf("\n1. insert \n 2. delete \n 3. display \n");
        printf("Enter the choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                insert();
                break;

            case 2:
                delete();
                break;

            case 3:
                display();
                break;
            
            default:
                printf("Invalid choice\n");
                break;
        }
        printf("Do you want to continue? \n");
        scanf("%d",&cont);
    }while(cont==1);

    return 0;
}