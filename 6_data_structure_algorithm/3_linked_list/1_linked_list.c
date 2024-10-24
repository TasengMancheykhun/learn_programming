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
  
  if (first==NULL)
    {
        printf("Insufficient memory");
    }
  else{
    first -> data=10;
    first -> next=NULL;
  }  

  insert_end(first,20);
  insert_end(first,30);
  insert_end(first,40);
  insert_end(first,50);
  insert_end(first,60);
  insert_end(first,70);
  insert_end(first,80);
  
  print(first);
  printf("----------------\n");
  print(first);
  printf("After inserting in front: \n");
  insert_front(first,45);
  print(first);

  printf("----------------\n");
  print(first);
  printf("After inserting in position 2 with number 455: \n");
  insert_position(first,2,455);
  print(first);

  printf("----------------\n");
  print(first);
  printf("After deleting from end: \n");
  delete_end(first); 
  print(first);
  
  printf("----------------\n"); 
  print(first); 
  printf("After deleting from front: \n");
  delete_front(first);
  
  printf("----------------\n");
  print(first);
  int pos=3;
  delete_position(first, pos);
  printf("After deleting from position %d: \n",pos);
  print(first);

  printf("----------------\n");
  search_number(first,40);
    
  return 0;
}
