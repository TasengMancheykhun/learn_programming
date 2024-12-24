#include<stdio.h>
#include<stdlib.h>

/*
c program to delete node from Linklist from 
first position
last position
given position 
*/

struct node {
    int data;
    struct node *next;
};

struct node *first;

void print(struct node *first)
{
    struct node *temp;
    temp=first;
    while (temp->next!=NULL)
    {   
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
    printf("\n");
}

void insert_end(struct node *first, int no)  // insert new node at the end
{
    struct node *ptr, *temp;
    ptr = (struct node *) malloc(sizeof(struct node));
    
    ptr->data = no;
    ptr->next = NULL;       // set link part of ptr to NULL to insert it in the end
    temp = first;
    while(temp->next!=NULL)   // this loop is to make temp reach the last node
    {
        temp=temp->next;   
    }
    // temp will be the last node, whose link part with get the value ptr.
    // ptr will be last node now
    temp->next=ptr;

    print(first);
} 

void insert_front(struct node *first, int no)  // insert new node in first position
{
    struct node *ptr, *temp;
    ptr = (struct node *) malloc(sizeof(struct node));
    
    temp = first;

    ptr -> data=no;
    ptr -> next=temp;
    first = ptr;
    //printf("\n After inserting at first position \n");
    print(first);
}


void insert_position(struct node *first, int pos, int num)  // insert at a given position
{
    struct node *ptr, *p, *ptr1;
    ptr = (struct node *) malloc(sizeof(struct node));
    p = (struct node *) malloc(sizeof(struct node));
    p->data=num;

    ptr = first;

    for (int i=1; i<pos-1; i++)
    {
        ptr = ptr->next;
    }
    // at end of loop ptr will be at pos position

    ptr1 = ptr->next;

    ptr->next = p;
    p->next=ptr1;

    print(first);
}


//DELETE 
//delete from end
void delete_end(struct node *first)
{
    struct node *ptr, *prev;
    ptr = (struct node *) malloc(sizeof(struct node));

    ptr=first;
    while(ptr->next != NULL)
    {
        prev=ptr;
        ptr=ptr->next;
    }
    prev->next=NULL;
    free(ptr);

    print(first);
}

//delete from front 
void delete_front(struct node *first)
{    
    struct node *ptr;
    ptr = (struct node *) malloc(sizeof(struct node));
    
    ptr = first;
    first=first->next;
    //free(ptr);
    print(first);        
} 

//delete from position
void delete_position(struct node *first, int pos)
{
    struct node *ptr, *prev;
    ptr = (struct node *) malloc(sizeof(struct node));

    ptr=first;

    while(pos>1)
    {    
      prev=ptr;
      ptr=ptr->next;
      pos--;
    }    

    prev->next=ptr->next;
    free(ptr);

    print(first);
}

//search element
void search_number(struct node *first, int num)
{
    struct node *ptr;
    ptr = (struct node *) malloc(sizeof(struct node));

    ptr=first;
    int index=0;
    while(ptr->next != NULL)
    {      
      if (ptr->data == num)
      {
        break;
      }
      index++;
      ptr=ptr->next;
    }

    if (index!=0)
        printf("%d found in the index number: %d\n",num,index);
    else
        printf("%d not found in the Linked List\n",num);
}

int main()
{

    first = (struct node *) malloc(sizeof(struct node));
    int choice,set,pos,n;

    first->data=10;
    first->next=NULL;

    if (first==NULL)
        {
            printf("Insufficient memory");
        }
    
    else
        {
            do
            {
                printf("Enter your choice: \n");
                printf("[1] To insert number at end\n");
                printf("[2] To insert number at beginning\n");
                printf("[3] To insert number at given position\n");
                printf("[4] To delete number from beginning\n");
                printf("[5] To delete number from end\n");
                printf("[6] To delete number from given position\n");
                printf("[7] To search a number\n");
                printf(">>"); 
                scanf("%d",&choice);
        
                switch (choice)
                {
                case(1):
                    printf("Enter number to insert: \n");
                    scanf("%d",&n);
                    insert_end(first,n);
                    break;
              
                case(2):
                    printf("Enter number to insert: \n");
                    scanf("%d",&n);
                    insert_front(first,n);
                    break;
                
                case(3):
                    printf("Enter position number: \n");
                    scanf("%d",&pos);
                    printf("Enter number to insert: \n");
                    scanf("%d",&n);
                    insert_position(first,pos,n);
                    break;
        
                case(4):
                    delete_front(first);
                    break;
        
                case(5):
                    delete_end(first);
                    break;
        
                case(6):
                    printf("Enter position number: \n");
                    scanf("%d",&n);
                    delete_position(first, n);
                    break;
                
                case(7):
                    printf("Enter number to search: \n");
                    scanf("%d",&n);
                    search_number(first,n);
                    break;

                default:
                    printf("Invalid option...TRY AGAIN \n");
                    break;                        
                }
        
                printf("Do you want to continue: YES=1, NO=0\n");
                scanf("%d",&set);
            }while (set==1);   
        }
  
  return 0;
}
