#include <stdio.h>
#include <stdlib.h>
struct node 
{
  int data;
  struct node*link;
} *head=NULL,*ptr,*ptr1,*ptr2,*temp;
void insertion () 
{
  temp=(struct node*)malloc (sizeof(struct node));
  if (temp==NULL)
  printf("Overflow!\n");
  else if (head==NULL)
  {
    printf("Insert an element:");
    scanf("%d",&temp->data);
    temp->link=NULL;
    head=temp;
  }
  else 
  {
    int position;
    printf("Choose where the new element to be insert...\n1.Insert at beginning\t 2.Insert at end\t 3.Insert at any position\n");
    scanf("%d",&position);
    if (position==1)
    {
      printf("Insert an element:");
      scanf("%d",&temp->data);
      temp->link=head;
      head=temp;
    }
    else if (position==2)
    {
      ptr=head;
      while (ptr->link!=NULL)
      ptr=ptr->link;
      ptr->link=temp;
      printf("Insert an element:");
      scanf("%d",&temp->data);
      temp->link=NULL;
    }
    else if (position==3)
    {
      int key;
      printf("Enter the element value after which you want to insert the new node:");
      scanf("%d",&key);
      ptr1=head;
      ptr2=ptr1->link;
      while ((ptr1->data!=key)&&(ptr2->link!=NULL))
      {
        ptr1=ptr2;
        ptr2=ptr2->link;
      }
      if (ptr1->data==key)
      {
        printf("Insert an element:");
        scanf("%d",&temp->data);
        temp->link=ptr2;
        ptr1->link=temp;
      }
      else
      printf("Element not found in the Linked List!!!\n");
    }
    else 
    printf("Invalid Input!\n");
  }
}
void deletion ()
{
  if (head==NULL)
  printf("Underflow Error! \n");
    else if (head->link == NULL) 
    {
        ptr = head;
        printf("%d is Deleted\n",ptr->data);
        head = NULL;
        free(ptr);
     }
      else
      {
        int position;
        printf("Choose where the  element to be delete...\n1.Delete from beginning\t 2.Delete from end\t 3.Delete from any position\n");
        scanf("%d",&position);
        if (position==1)
        {
          ptr=head;
          printf("%d is Deleted\n",ptr->data);
          head=ptr->link;
          free (ptr);
        }
        else if (position==2)
        {
          ptr1=head;
          ptr2=ptr1->link;
          while (ptr2->link!=NULL)
          {
            ptr1=ptr2;
            ptr2=ptr2->link;
          }
          printf("%d is Deleted\n",ptr2->data);
          ptr1->link=NULL;
          free (ptr2);
        }
        else if (position==3)
        {
          int key;
          printf("Select the node to be deleted:");
          scanf("%d",&key);
          ptr1=head;
          ptr2=ptr1->link;
          while ((ptr2->data!=key)&&(ptr2->link!=NULL))
          {
            ptr1=ptr2;
            ptr2=ptr2->link;
          }
          if (ptr2->data==key)
          {
            printf("%d is Deleted\n",ptr2->data);
            ptr1->link=ptr2->link;
            free (ptr2);
          }
          else
          printf("Element not found in the Linked List!!!\n");
         }
         else
         printf("Invalid Input!\n");
      }
}
void display ()
{
  if (head==NULL)
  printf("Linked is Empty! Underflow!\n");
  else
  {
    printf("LINKED LIST:\n");
    ptr=head;
    while (ptr!=NULL)
    {
      printf("%d\t",ptr->data);
      ptr=ptr->link;
    }
    printf("\n");
  }
}       
void main ()
{
  int choice;
  while (choice!=4)
  {
    printf("Choose the operation to be performed\n1.Insertion\t 2.Deletion\t 3.Display\t 4.Exit\n");
    scanf ("%d",&choice);
    switch (choice)
    {
      case 1:insertion ();
              break;
      case 2:deletion ();
             break;
      case 3:display ();
             break;
      case 4:
             printf("Code Executed Successfully...\n");    
             break;   
      default:
              printf("Invalid Input!\n");
              break;           
    }
  }
}
   
  
 
