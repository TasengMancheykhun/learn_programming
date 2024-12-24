#include <stdio.h>
#include <stdlib.h>

struct node 
{
  int data;
  struct node *next;    
};

struct node *front, *rear;

void insert()
{
    struct node *temp;
    temp = (struct node *) malloc(sizeof(struct node));

    int val;

    printf("Enter the value: \n");
    scanf("%d",&val);
    temp->data=val; 

    if (front == NULL && rear == NULL)     // if linklist is empty
    {
        front = temp;
        rear = temp;
        front -> next = NULL;
        rear -> next = NULL;
    }

    else 
    {
        rear -> next = temp;
        rear = temp;
        rear -> next = NULL;
    }
}


void delete()
{
    struct node *temp;
    if (front == NULL)
        printf("Queue empty");
    else
    {
        temp = front;
        front = front-> next;
        free(temp);
    }
}


void display()
{
    struct node *temp;
    temp = front;
    while(temp!=NULL)
    {
        printf("%d \n",temp->data);
        temp = temp->next;
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