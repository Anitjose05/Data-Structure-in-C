#include<stdio.h>
int n;
int queue[20];
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
 printf("%d is deleted from the queue ",queue[front]);
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
	printf("Enter the  size of the queue");
	scanf("%d",&n);
	while(c!=4)
	{
	printf("Choose the operation  to perform\n");
	printf("1.Enqueue\n");
	printf("2.Dequeue\n");	
	printf("3.Display\n");
	printf("4.Stop");	
	scanf("\n%d",&c);

	switch(c)
	{
		case 1:
			printf("Enter the no: to be entered");
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
			printf("Code successfully executed");
			break;
		default:
			printf("error");
			break;
	}
	}
}
