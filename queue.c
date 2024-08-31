#include<stdio.h>
int n;
int queue[20];
int front =-1;
int rear=-1;
void enqueue(int a)
{
if(rear==n-1)
	printf("Overflow\n");
else if(front==-1 && rear==-1)
{
	front=rear=0;
	queue[rear]=a;
}
else
{
	rear++;
	queue[rear]=a;
}
}
void dequeue()
{
 if(front==-1 && rear==-1)
 	printf("Underflow\n");
 else if(front==rear)
 	front=rear=-1;
 else
 {
 printf("%d is deleted from the queue\n ",queue[front]);
 	front++;
 }
}
void display()
{
 if(front==-1 && rear==-1)
 	printf("The queue is empty\n ");
 else 
 {
for(int i=front;i<(rear+1);i++)
 {
	printf("%d\t",queue[i]);
 }
 printf("\n");
 }
}
void main()
{
	int x=0,y;
	printf("Enter the  size of the queue :");
	scanf("%d",&n);
	while(x!=4)
	{
	printf("1.Enqueue\n");
	printf("2.Dequeue\n");	
	printf("3.Display\n");
	printf("4.Exit\n");
	printf("Choose the operation  to perform :");	
	scanf("%d",&x);

	switch(x)
	{
		case 1:
			printf("Enter the no: to be entered :");
			scanf("%d",& y);
			enqueue(y);
			break;
		case 2:	
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			printf("Code successfully executed");
			break;
		default:
			printf("Invalid Choice\n");
			break;
	}
	}
}
