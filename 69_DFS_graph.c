#include <stdio.h>
int adjmat[][7] = {
    {0, 1, 1, 1, 0, 0, 0},
    {1, 0, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0},
    {1, 0, 1, 0, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 1},
    {0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 1, 0, 0},
};
int visited[] = {0, 0, 0, 0, 0, 0, 0};
void dfs(int i)
{
    int j;
    printf("%d ", i);
    visited[i] = 1;
    for (j = 0; j < 7; j++)
    {
         if(adjmat[i][j]==1 && visited[j]==0)
         {
            dfs(j);
         }
    }
}
void main()
{
    dfs(5);
}