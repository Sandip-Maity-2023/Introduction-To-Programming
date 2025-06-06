#include<stdio.h>
#include<limits.h>
#define v 5

int minKey(int key[],int mstSet[]){
    int min=INT_MAX,min_index;      //INT_MAX=2^21-1
    for(int i=0;i<v;i++) {
        if (!mstSet[i] && key[i] < min)
            min = key[i], min_index = i;
    }
        return min_index;
    }

    void printMST(int parent[],int graph[v][v]) {
        printf("Edge \tWeight\n");
        for (int i = 1; i < v; i++) {
            printf("%d - %d \t%d\n", parent[i], i, graph[i][parent[i]]);
        }
    }

    void primMST(int graph[v][v]){
            int parent[v];
            int key[v];
            int mstSet[v];

            for(int i=0;i<v;i++){
                key[i]=INT_MAX, mstSet[i]=0;
            }
            key[0]=0;
            parent[0]=-1;

            for(int count=0;count<v-1;count++) {
                int u = minKey(key, mstSet);

                mstSet[u] = 1;

                for (int i = 0; i < v; i++) {
                    if (graph[u][i] && !mstSet[i] && graph[u][i] < key[i]) {
                        parent[i] = u, key[i] = graph[u][i];
                    }
                }
            }
            printMST(parent,graph);
        }

        int main() {
            int graph[v][v] = {
                    {0,2,0,6,0},
                    {2,0,3,8,5},
                    {0,3,0,0,7},
                    {0,5,7,9,0}
            };

            primMST(graph);

        }


