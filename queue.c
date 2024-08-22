#include<stdio.h>
int n;
int queue[15];
int front =-1;
int rear=-1;
void enqueue(int x)
{
if(rear==n-1)
	printf("Overflow");
else if(front==-1 && rear==-1)
{
	front=rear=0;
	queue[rear]=x;
}
else
{
	rear++;
	queue[rear]=x;
}
}
void dequeue()
{
 if(front==-1 && rear==-1)
 	printf("Underflow");
 else if(front==rear)
 	front=rear=-1;
 else
 {
 printf("%d is removed from the queue ",queue[front]);
 	front++;
 }
}
void display()
{
 if(front==-1 && rear==-1)
 	printf("the queue is empty ");
 else 
 {
for(int i=front;i<(rear+1);i++)
 {
	printf("%d\n",queue[i]);
 }
 }
}
void main()
{
	int c=0,s;
	printf("Enter the maximum size of the queue");
	scanf("%d",&n);
	while(c!=4)
	{
	printf("Choose the operation you need to perform\n");
	printf("1.enqueue\n");
	printf("2.dequeue\n");	
	printf("3.display\n");
	printf("4.stop");	
	scanf("\n%d",&c);

	switch(c)
	{
		case 1:
			printf("Enter the number to be entered");
			scanf("%d",& s);
			enqueue(s);
			break;
		case 2:	
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			printf("Code executed successfully");
			break;
		default:
			printf("Invalid Function");
			break;
	}
	}
}
