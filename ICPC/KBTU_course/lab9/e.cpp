#include <iostream>
#include <cstring>

using namespace std;

#define MAX 2001
#define INF 0x3F3F3F3F

int g[MAX][MAX], used[MAX], dist[MAX];

void Relax(int i, int j) {
    if (dist[i] + g[i][j] < dist[j])
        dist[j] = dist[i] + g[i][j];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("dijkstra.in", "r", stdin);
    freopen("dijkstra.out", "w", stdout);
    int n, s, f;
    cin >> n >> s >> f;

    memset(g, 0x3F, sizeof(g));
    memset(used, 0, sizeof(used));
    memset(dist, 0x3F, sizeof(dist));
    dist[s] = 0;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> g[i][j];

    for (int i = 1; i < n; i++) {
        int minDist = INF, v = -1;
        for (int j = 1; j <= n; j++)
            if (used[j] == 0 && dist[j] < minDist) {
                minDist = dist[j];
                v = j;
            }

        if (v < 0)
            break;

        for (int j = 1; j <= n; j++)
            if (used[j] == 0 && g[v][j] != -1)
                Relax(v, j);

        used[v] = 1;
    }

    if (dist[f] == INF)
        cout << "-1\n";
    else
        cout << dist[f] << endl;

    return 0;
}
