#include <stdio.h>
struct edge
{
    int u;
    int v;
    int weight;
};
int parent[50], n = 7;
int find(int i)
{
    if (parent[i] == -1)
    {
        return i;
    }
    return parent[i] = find(parent[i]);
}
int uni(int u, int v)
{
    int rootU = find(u);
    int rootV = find(v);
    if (rootU != rootV)
    {
        parent[rootV] = rootU;
        return 1;
    }
    return 0;
}
void kruskal(struct edge ed[], int edge_count)
{
    int ne = 0, i, mincost = 0;
    for (i = 0; i < n; i++)
    {
        parent[i] = -1;
    }
    printf("\nspannig tree edges :\n");
    printf("edno.   edges    weight \n");
    for (i = 0; i < edge_count && ne < (n - 1); i++)
    {
        if (uni(ed[i].u, ed[i].v))
        {
            printf("%d   %d<------->%d    %d\n", ++ne, ed[i].u, ed[i].v, ed[i].weight);
            mincost = mincost + ed[i].weight;
        }
    }
    printf("minimum cost of graph :%d", mincost);
}
void main()
{
    int adjmat[7][7] = {
        {0, 4, 2, 0, 0, 0, 0},
        {4, 0, 7, 3, 0, 0, 20},
        {2, 7, 0, 0, 8, 0, 0},
        {0, 3, 0, 0, 6, 1, 0},
        {0, 0, 8, 6, 0, 5, 0},
        {0, 0, 0, 1, 5, 0, 0},
        {0, 20, 0, 0, 0, 0, 0},
    };
    struct edge ed[50];
    int i, j, edge_count = 0;
    for (i = 0; i < 7; i++) // 1
    {
        for (j = 0; j < 7; j++)
        {
            int weight = adjmat[i][j];
            if (weight != 0 && i < j) // to remove duplicate edge
            {
                ed[edge_count].u = i;
                ed[edge_count].v = j;
                ed[edge_count].weight = weight;
                edge_count++;
            }
        }
    }

    // code for diplay edges
    printf("before sorting all edges set of graph :-\n");
    printf("edno.   edges    weight \n");
    for (i = 0; i < edge_count; i++)
    {
        printf("%d   %d<------>%d    %d \n", i + 1, ed[i].u, ed[i].v, ed[i].weight);
    }

    // code for sorting edges using bubble sort
    for (i = 0; i < edge_count - 1; i++) // 9
    {
        for (j = 0; j < edge_count - i - 1; j++)
        {
            if (ed[j].weight > ed[j + 1].weight)
            {
                struct edge temp;
                temp = ed[j];
                ed[j] = ed[j + 1];
                ed[j + 1] = temp;
            }
        }
    }
    // code for diplay edges
    printf("after sorting all edges set of graph :-\n");
    printf("edno.   edges    weight \n");
    for (i = 0; i < edge_count; i++)
    {
        printf("%d   %d<------>%d    %d \n", i + 1, ed[i].u, ed[i].v, ed[i].weight);
    }
    kruskal(ed, edge_count);
}