#include <stdio.h>
int n;
int stack[20];
int top = -1;
void push(int x) 
{
    if (top == n - 1) 
    {
        printf("Stack is full!\n");
        return;
    }
    stack[++top] = x;
}
void pop() 
{
    if (top == -1)
    {
        printf("Stack is empty!\n");
        return;
    }
    printf("Popped element: %d\n", stack[top--]);
}
void display() 
{
    if (top == -1)
    {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
int main() 
{
    printf("Enter the size of the stack:");
    scanf("%d",&n);
    int choice, x;
    while (1) 
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                    printf("Enter element to push:");
                    scanf("%d", &x);
                    push(x);
                    break;
            case 2:
                    pop();
                    break;
            case 3:
                    display();
                    break;
            case 4:
                    printf("Code executed successfully");
                    return 0;
            default:
                    printf("Invalid choice!\n");
        }
    }
    return 0;
}
