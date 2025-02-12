#include <stdio.h>
#include <limits.h>
int vertice = 6;
int min_weight(int weight[], int mst[])
{
    int min_w = INT_MAX, min_index, i;
    for (i = 0; i < vertice; i++)
    {
        if (mst[i] == 0 && weight[i] < min_w)
        {
            min_w = weight[i];
            min_index = i;
        }
    }
    return min_index;
}
void prims(int g[vertice][vertice])
{
    int perant[vertice];
    int weight[vertice];
    int mst[vertice];
    int i, v, count;
    for (i = 0; i < vertice; i++)
    {
        mst[i] = 0;
        weight[i] = INT_MAX;
    }
    weight[0] = 0;
    perant[0] = -1;
    for (count = 0; count < vertice - 1; count++)
    {
        int edge = min_weight(weight, mst);
        mst[edge] = 1;
        for (v = 0; v < vertice; v++)
        {
            if (g[edge][v] && mst[v] == 0 && g[edge][v] < weight[v])
            {
                perant[v] = edge;
                weight[v] = g[edge][v];
            }
        }
    }
    printf("   edge       weight\n");
    for (i = 1; i < vertice; i++)
    {
        printf("%d<----->%d     %d\n", perant[i], i, g[perant[i]][i]);
    }
}
void main()
{
    int g[6][6] = {
        {0, 2, 6, 2, 0, 0},
        {2, 0, 3, 0, 0, 0},
        {6, 3, 0, 0, 4, 0},
        {2, 0, 0, 0, 1, 8},
        {0, 0, 4, 1, 0, 7},
        {0, 0, 0, 8, 7, 0}};
    prims(g);
}