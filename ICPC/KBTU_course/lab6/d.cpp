#include <stdio.h>
#include <string.h>

#define MAX 110

int g[MAX][MAX], used[MAX], Error;
int n, m;

void dfs(int v, int color) {
    if (Error) return;
    used[v] = color;
    for (int i = 1; i <= n; i++) {
        if (g[v][i]) {
            if (!used[i])
                dfs(i, 3 - color);
            else if (used[v] == used[i])
                Error = 1;
        }
    }
}

int main() {
    int a, b;
    scanf("%d %d", &n, &m);
    memset(g, 0, sizeof(g));
    memset(used, 0, sizeof(used));
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        g[a][b] = g[b][a] = 1;
    }
    Error = 0;
    for (int i = 1; i <= n; i++)
        if (!used[i]) dfs(i, 1);
    if (Error)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}
