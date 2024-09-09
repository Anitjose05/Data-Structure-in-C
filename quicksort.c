#include <stdio.h>
void swap(int a, int b,int A[]) 
{
    int t= A[a];
    A[a] = A[b];
    A[b] = t;
}
int p(int A[], int low, int high) 
{
    int pivot = A[high];
    int i = (low-1);
    for (int j = low; j <= high-1; j++) 
    {
        if (A[j] < pivot) 
        {
            i++;
            swap(i,j,A);
        }
    }
        swap(i+1,high,A);
        return (i+1);
}
void quick(int A[], int low, int high)
{
    if (low < high)
    {
        int pivot = p(A, low, high);
        quick(A, low, pivot - 1);
        quick(A, pivot + 1, high);
    }
}
void printArray(int A[], int size) 
{
    for (int i = 0; i < size; i++)
     {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int main()
 {
    int x;
    printf("Enter number of elements: ");
    scanf("%d",&x);
    int A[x];
    printf("Enter your elements: ");
    for (int i = 0; i < x; i++) 
    {
        scanf("%d", &A[i]);
    }
    printf("Original array: \n");
    printArray(A,x);
    quick(A,0,x-1);
    printf("Sorted array: \n");
    printArray(A,x);
    return 0;
}
