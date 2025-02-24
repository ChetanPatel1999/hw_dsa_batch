#include <stdio.h>
struct edge
{
    int u;
    int v;
    int weight;
};
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
    for (i = 0; i < 7; i++)
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
    printf("all edges set of graph :-\n");
    for (i = 0; i < edge_count; i++)
    {
        printf("%d   %d<------>%d    %d \n", i + 1, ed[i].u, ed[i].v, ed[i].weight);
    }
}