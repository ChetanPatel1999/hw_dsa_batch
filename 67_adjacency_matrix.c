// store adjacency matrix
#include <stdio.h>
int V = 5;
void init(int adjmat[V][V])
{
    int i, j;
    for (i = 0; i < V; i++)
    {
        for (j = 0; j < V; j++)
        {
            adjmat[i][j] = 0;
        }
    }
}
void display_mat(int adjmat[V][V])
{
    int i, j;
    for (i = 0; i < V; i++)
    {
        for (j = 0; j < V; j++)
        {
            printf("%d ", adjmat[i][j]);
        }
        printf("\n");
    }
}
void set_edge(int adjmat[V][V], int i, int j)
{
    adjmat[i][j] = 1;
    adjmat[j][i] = 1;
}
void main()
{
    int adjmat[V][V];
    char city[][12]={"ujjain","indore","mahu","depalpur","ratlam"};
    init(adjmat);
    set_edge(adjmat,0,1);
    set_edge(adjmat,0,3);
    set_edge(adjmat,1,2);
    set_edge(adjmat,2,3);
    set_edge(adjmat,4,3);
    set_edge(adjmat,4,2);
    display_mat(adjmat);
}