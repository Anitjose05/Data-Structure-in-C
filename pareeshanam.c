


#include <stdio.h>
#include <stdlib.h>

// Structure for a binary tree node
struct Node {
    int data;
};

// Function to create a new binary tree node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->data = data;
    return newNode;
}

// Function to create a binary tree using an array
void createBinaryTree(struct Node** tree, int* array, int size) {
    int i;
    for (i = 0; i < size; i++) {
        tree[i] = createNode(array[i]);
    }
}

// Function to display the binary tree
void displayBinaryTree(struct Node** tree, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("Node %d: %d\n", i, tree[i]->data);
        if (2 * i + 1 < size) {
            printf("Left child: %d\n", tree[2 * i + 1]->data);
        }
        if (2 * i + 2 < size) {
            printf("Right child: %d\n", tree[2 * i + 2]->data);
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter the number of nodes: ");
    scanf("%d", &size);

    int* array = (int*) malloc(size * sizeof(int));
    printf("Enter %d node values:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    struct Node** tree = (struct Node**) malloc(size * sizeof(struct Node*));
    createBinaryTree(tree, array, size);
    displayBinaryTree(tree, size);

    return 0;
}


