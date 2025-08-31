#include <stdio.h>
#define MAX 10
int adj[MAX][MAX], visited[MAX], n;
void dfs(int start) {
    printf("%d ", start);
    visited[start] = 1;
    for (int i = 0; i < n; i++) {
        if (adj[start][i] && !visited[i])
            dfs(i);
    }
}
int main() {
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);
    printf("DFS starting from 0: ");
    dfs(0);
    return 0;
}

