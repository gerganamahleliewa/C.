#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <inttypes.h>

typedef struct graph{
    int data;
    bool adj[5][5];
}Graph;

Graph* create(int data)
{
    Graph *g = malloc(sizeof(Graph));
    g->data = data;

    for(int i = 0; i < data;i++)
    {
        for(int j =0 ;j < data;j++)
        {
            g->adj[i][j] = false;
        }
    }
    return g;

}

void destroy(Graph *g)
{
    free(g);
}

void add(Graph *g,int v, int w)
{
    g->adj[v][w] = true;
}

void BFS(Graph *g, int top)
{
    bool visited[5];

    for(int i =0; i< g->data;i++)
    {
        visited[i] = false;
    }

    int queue[5];
    int front = 0,rear = 0;

    visited[top] = true;
    queue[rear++] = top;

    while(front != rear)
    {
        top = queue[front++];
        printf("%d ",top);

        for(int i = 0;i < g->data;i++)
        {
            if(g->adj[top][i] && !visited[i])
            {
                visited[i] = true;
                queue[rear++] = i;
            }
        }
    }
}
