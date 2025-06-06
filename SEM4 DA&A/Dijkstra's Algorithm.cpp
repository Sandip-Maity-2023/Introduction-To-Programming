#include <stdio.h>
#define INF 99999
#define V 5 // Number of vertices

void dijkstra(int graph[V][V], int src) {
    int dist[V];      // dist[i] will hold the shortest distance from src to i
    int visited[V];   // visited[i] will be true if vertex i is included in shortest path

    // Initialize distances
    for (int i = 0; i < V; i++) {
        dist[i] = INF;
        visited[i] = 0;
    }
    dist[src] = 0;

    for (int count = 0; count < V - 1; count++) {
        int min = INF, u;

        // Find the vertex with minimum distance
        for (int v = 0; v < V; v++)
            if (!visited[v] && dist[v] <= min) {
                min = dist[v];
                u = v;
            }

        visited[u] = 1; // Mark the chosen vertex as visited

        // Update distance value of adjacent vertices
        for (int v = 0; v < V; v++)
            if (!visited[v] && graph[u][v] && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    // Print final distances
    printf("Vertex\tDistance from Source %d\n", src);
    for (int i = 0; i < V; i++)
        printf("%d\t%d\n", i, dist[i]);
}

int main(){
int graph[V][V] = {
        {0, 4, 1, 0, 3},
        {4, 0, 2, 0, 0},
        {1, 2, 0, 0, 0},
        {0, 0, 0, 0, 4},
        {3, 0, 0, 4, 0}
};
dijkstra(graph, 0);
}

