#include<stdio.h>
int n;
int queue[20];
int front=0;
int rear=0;
int count=0;
void enqueue (int x)
{
  if (count==n)
  {
    printf("Circular Queue is full!\n");
    return;
  }
  queue[rear]=x;
  rear=(rear+1)%n;
  count++;
}
void dequeue ()
{
  if (count==0)
  {
    printf("Circular Queue is empty!\n");
    return;
  }
  int x=queue[front];
  front=(front+1)%n;
  count--;
  printf("Removed element from Circular Queue: %d\n",x);
}
void display ()
{
  if (count==0)
  {
    printf("Circular Queue is empty!\n");
    return;
  }
  printf("Circular Queue elements:\n");
  int i=front;
  for(int j=0;j<count;j++)
  {
    printf("%d\t",queue[i]);
    i=(i+1)%n;
  }
  printf("\n");
}
void main ()
{
  printf("Enter the size of the Circular Queue :");
  scanf("%d",&n);
  int choice,x;
  while (1)
  {
    printf("1.Enqueue\n");
    printf("2.Dequeue\n");
    printf("3.Display\n");
    printf("4.Exit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
      case 1:
      	     printf("Enter the enqueue element : ");
      	     scanf("%d",&x);
      	     enqueue (x);
      	     break;
      case 2:
      	     dequeue ();
      	     break;
      case 3:
      	     display ();
      	     break;
      case 4:
      	     printf("Code executed successfully");
      	     return;
      default:
      	      printf("Invalid Choice!\n");
    }
  }
}
