#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include <inttypes.h>

typedef struct graph{
    int v;
    int e;
    int **adj;
}Graph;


Graph *create(int data)
{
    Graph *g = (Graph*) malloc(sizeof (Graph));

    g->v = data;
    g->e = data;

    g->adj = (int**)malloc((g->v) * sizeof(int*));
    for (int k = 0; k < g->v; k++) {
        g->adj[k] = (int*)malloc((g->v) * sizeof(int));
    }

    for(int i=0;i <g->v;i++)
    {
        for(int j = 0;j < g->v;j++)
        {
            g->adj[i][j] = 0;

        }
    }
    return g;
}

void add(Graph *g,int s, int w)
{
    g->adj[s][w] = 1;
}

int vis[100];

void dfs(Graph *g,int top)
{

    vis[top] = 1;
    printf("%d " ,top);
    for(int i = 0; i < g->v;i++)
    {
        if(g->adj[top][i] && !vis[i])
        {
            dfs(g,i);
        }
    }
}

void traversal(Graph *g)
{
    for(int i =0 ; i < 100 ;i++)
    {
        vis[i] = 0;
    }

    for(int k = 0;k < g->v;k++)
    {
        if(!vis[k])
        {
            dfs(g,k);
        }
    }
}
