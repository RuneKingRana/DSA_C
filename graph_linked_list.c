#include <stdio.h>
#include <stdlib.h>
int i,j;
// Node structure for adjacency list
struct Node {
    int vertex;
    struct Node* next;
};

// Array of pointers to Node (one for each vertex)
struct Node* adjList[10];
int N;  // Number of vertices

// Function to create a new node
struct Node* createNode(int vertex) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->vertex = vertex;
    newNode->next = NULL;
    return newNode;
}

// Function to add an edge
void addEdge(int src, int dest) {
    struct Node* newNode = createNode(dest);
    newNode->next = adjList[src];
    adjList[src] = newNode;
}

// Display function
void display() {
    printf("Adjacency List:\n");
    for (i = 0; i < N; i++) {
        struct Node* temp = adjList[i];
        printf("%d: ", i);
        while (temp) {
            printf("%d ", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    int i, j;
    printf("Enter the number of vertices: ");
    scanf("%d", &N);

    // Initialize the adjacency list
    for (i = 0; i < N; i++) {
        adjList[i] = NULL;
    }

    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            int edge;
            scanf("%d", &edge);
            if (edge == 1) {
                addEdge(i, j);
            }
        }
    }

    display();
    return 0;
}

