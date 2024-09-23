#include <stdio.h>
#include <stdlib.h>
struct Node
{
int data;
struct Node*link;
};
struct Node* head;
void insertatbeg(int x)
{
struct Node* temp;
temp = (struct Node*)malloc(sizeof(struct Node));
temp->data = x;
temp->link = head;
head = temp;
}
void printlist(struct Node* temp)
{
if(temp==NULL)
return;
printf("%d->",temp->data);
printlist(temp->link);
}
int main()
{
int i,n,x,c;
head=NULL;
printf("Enter no of nodes:");
scanf("%d",&n);
for (int i=0;i<n;i++)
{
 printf("Enter node %d.",i+1);
 scanf("%d",&x);
 insertatbeg(x);
}
printf("LINKED LIST : ");
printlist(head);
printf("NULL");
do {
 printf("\n1.Add new element\n0.Exit\n");
 scanf("%d",&c);
 if (c==1)
 {
   printf("Enter new element:");
   scanf("%d",&x);
   insertatbeg(x);
   printf("UPDATED LIST:");
   printlist(head);
   printf("NULL");
  }} while (c!=0);
  {
  printf("Code Successfully Executed");
  }
return 0;
}
