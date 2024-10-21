#include<stdio.h>
#include<stdlib.h>
void main ()
{
   int n,i,position;
   printf ("Enter the no:of elements in the Binary Tree:");
   scanf("%d",&n);
   int a[n];
   printf("Enter the Binary Tree elements:\n");
   for (i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("BINARY TREE: ");
   for (i=0; i<n; i++) 
   {
      printf("%d\t",a[i]);
   }
   printf("\nEnter the position:");
   scanf("%d",&position);
   if (position<0 || position>=n)
   {
      printf("INVALID INPUT!\n");
      exit (0);
   }
   /* if (position<0 )
   printf("NO ELEMENT \n"); */ 
   else
   {
      if (position>0)
      printf("PARENT NODE OF %d=%d\n",a[position],a[(position-1)/2]);      
      else
      printf("NO PARENT!\n");
      if ((2*position)+1>=n)
      printf("NO LEFT CHILD!\n");
      else
      printf("LEFT CHILD OF %d=%d\n",a[position],a[(position*2)+1]);
      if ((2*position)+2>=n)
      printf("NO RIGHT CHILD!\n");
      else
      printf("RIGHT CHILD OF %d=%d\n",a[position],a[(position*2)+2]);
   }
}
      
