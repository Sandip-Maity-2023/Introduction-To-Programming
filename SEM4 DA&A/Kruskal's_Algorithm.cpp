#include <stdio.h>

#define V 5
#define E 7

int parent[V];

// Find the set (parent) of node i
int find(int i) {
    while (i != parent[i])
        i = parent[i];
    return i;
}

// Union the sets of u and v
void unionSet(int u, int v) {
    int setU = find(u);
    int setV = find(v);
    parent[setU] = setV;
}

// Kruskal’s algorithm
void kruskal(int edges[E][3]) {
    int i, j;
    int mst[V - 1][3]; // Will hold MST edges
    int count = 0;
    int totalWeight = 0;

    // Initialize each node as its own parent
    for (i = 0; i < V; i++)
        parent[i] = i;

    // Sort edges by weight (Bubble Sort)
    for (i = 0; i < E - 1; i++) {
        for (j = 0; j < E - i - 1; j++) {
            if (edges[j][2] > edges[j + 1][2]) {
                int temp0 = edges[j][0];
                int temp1 = edges[j][1];
                int temp2 = edges[j][2];

                edges[j][0] = edges[j + 1][0];
                edges[j][1] = edges[j + 1][1];
                edges[j][2] = edges[j + 1][2];

                edges[j + 1][0] = temp0;
                edges[j + 1][1] = temp1;
                edges[j + 1][2] = temp2;
            }
        }
    }

    // Pick smallest edges one by one
    for (i = 0; i < E && count < V - 1; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        int w = edges[i][2];

        if (find(u) != find(v)) {
            mst[count][0] = u;
            mst[count][1] = v;
            mst[count][2] = w;
            totalWeight += w;
            count++;

            unionSet(u, v);
        }
    }

    // Print MST
    printf("Edges in MST:\n");
    for (i = 0; i < count; i++) {
        printf("%d - %d : %d\n", mst[i][0], mst[i][1], mst[i][2]);
    }
    printf("Total Weight = %d\n", totalWeight);
}

int main() {
    // Edges: {source, destination, weight}
    int edges[E][3] = {
            {0, 1, 10},
            {0, 2, 6},
            {0, 3, 5},
            {1, 3, 15},
            {2, 3, 4},
            {1, 2, 25},
            {3, 4, 2}
    };

    kruskal(edges);
    return 0;
}
