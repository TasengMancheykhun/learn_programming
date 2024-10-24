#include <stdio.h>
#include <stdlib.h>

struct node 
{
  int data;
  struct node *next;    
};

struct node *top;

void push()
{
    struct node *temp;
    temp = (struct node *) malloc(sizeof(struct node));

    int val;

    printf("Enter the value: \n");
    scanf("%d",&val);
    temp->data=val; 

    if (top == NULL)     // if linklist is empty
    {
        top = temp;
        
        top -> next = NULL;
        
    }

    else 
    {
        top -> next = temp;
        top = temp;
        
    }
}


void pop()
{
    struct node *temp;
    if (top == NULL)
        printf("Stack is empty");
    else
    {
        temp = top;
        top = top-> next;
        free(temp);
    }
}


void display()
{
    struct node *temp;
    temp = top;
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
                push();
                break;

            case 2:
                pop();
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