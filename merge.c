#include <stdio.h>
void merge(int a[], int left, int mid, int right) {
    int i = left, j = mid + 1, k = 0;
    int temp[right - left + 1];
    while (i <= mid && j <= right) {
        if (a[i] <= a[j]) {
            temp[k++] = a[i++];
        } else {
            temp[k++] = a[j++];
        }
    }
    while (i <= mid) {
        temp[k++] = a[i++];
    }
    while (j <= right) {
        temp[k++] = a[j++];
    }
    for (i = left, k = 0; i <= right; i++, k++) {
        a[i] = temp[k];
    }
}
void mergeSort(int a[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}
void main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
        printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Original array:\n");
for (int i=0;i<n;i++) {
    printf("%d\t",a[i]);
}
    mergeSort(a, 0, n - 1);
    printf("\nSorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
