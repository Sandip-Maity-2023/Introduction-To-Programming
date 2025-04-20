#include <stdio.h>
#define MAX 100  // Maximum number of vertices

int adj[MAX][MAX]; // Adjacency matrix
int visited[MAX];  // Visited array
int queue[MAX];    // Queue for BFS
int front = -1, rear = -1;
int n;  // Number of vertices

// Function to add an edge
void addEdge(int u, int v) {
    adj[u][v] = 1;
    adj[v][u] = 1;  // Since it's an undirected graph
}

// Function to take input for adjacency matrix
void inputGraph() {
    int edges, u, v;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    for (int i = 0; i < edges; i++) {
        printf("Enter edge (u v): ");
        scanf("%d %d", &u, &v);
        addEdge(u, v);
    }
}

// Function to enqueue in BFS queue
void enqueue(int value) {
    if (rear == MAX - 1) return; //0 to start so last -1
    if (front == -1) front = 0;
    queue[++rear] = value;
}

// Function to dequeue from BFS queue
int dequeue() {
    if (front > rear || front == -1) return -1;
    return queue[front++];
}

// Function for BFS traversal
void bfs(int start) {
    for (int i = 0; i < n; i++) visited[i] = 0; // Reset visited array

    visited[start] = 1;
    enqueue(start);

    printf("BFS Traversal: ");
    while (front <= rear) {
        int node = dequeue();
        printf("%d ", node);

        for (int i = 0; i < n; i++) {
            if (adj[node][i] == 1 && !visited[i]) {
                visited[i] = 1;
                enqueue(i);
            }
        }
    }
    printf("\n");
}

// Function for DFS traversal
void dfs(int start) {
    printf("%d ", start);
    visited[start] = 1;

    for (int i = 0; i < n; i++) {
        if (adj[start][i] == 1 && !visited[i]) {  //!visited[i] (equivalent to visited[i] == 0)
            dfs(i);
        }
    }
}

int main() {
    inputGraph();

    int start;
    printf("Enter starting vertex for BFS and DFS: ");
    scanf("%d", &start);

    bfs(start);

    for (int i = 0; i < n; i++) visited[i] = 0; // Reset visited array for DFS
    printf("DFS Traversal: ");
    dfs(start);
    printf("\n");

    return 0;
}
