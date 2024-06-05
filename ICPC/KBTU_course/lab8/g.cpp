#include <iostream>
#include <vector>
using namespace std;

vector<int> g[100001];
int used[100001], up[100001], d[100001], ArtPoints[100001];
int tim;

void dfs(int v, int p) {
    used[v] = 1;
    d[v] = up[v] = tim++;
    int children = 0;
    for (int i = 0; i < g[v].size(); i++) {
        int to = g[v][i];
        if (to == p)
            continue;
        if (used[to] == 1)
            up[v] = min(up[v], d[to]);
        else {
            dfs(to, v);
            up[v] = min(up[v], up[to]);
            if ((up[to] >= d[v]) && (p != -1))
                ArtPoints[v] = 1;
            children++;
        }
    }
    if ((p == -1) && (children > 1))
        ArtPoints[v] = 1;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n + m; i++)
        g[i].clear();

    for (int i = 1; i <= m; i++) {
        int v1, v2, v3;
        cin >> v1 >> v2 >> v3;
        g[n + i].push_back(v1);
        g[v1].push_back(n + i);
        g[n + i].push_back(v2);
        g[v2].push_back(n + i);
        g[n + i].push_back(v3);
        g[v3].push_back(n + i);
    }

    tim = 1;
    for (int i = 1; i <= n + m; i++)
        if (used[i] == 0)
            dfs(i, -1);

    int cntArtPoints = 0;
    for (int i = n + 1; i <= n + m; i++)
        if (ArtPoints[i] == 1)
            cntArtPoints++;

    cout << cntArtPoints << endl;

    if (cntArtPoints > 0) {
        for (int i = n + 1; i <= n + m; i++)
            if (ArtPoints[i] == 1)
                cout << i - n << " ";
        cout << endl;
    }

    return 0;
}