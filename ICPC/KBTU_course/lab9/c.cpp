#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct edge{
    int a, b, c;
    edge(int a, int b, int c) : a(a), b(b), c(c) {};
};

void dfs(vector<vector<int>>& g, vector<int>& us, int v) {
    us[v] = 1;
    for (int i = 0; i < int(g[v].size()); i++)
    {
        int to = g[v][i];
        if (!us[to])
            dfs(g, us, to);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("maze.in", "r", stdin);
    freopen("maze.out", "w", stdout);
    
    int const maxn = int(1e5 + 12);
    int const inf = int(1e9 + 7);
    int n, m;
    vector <edge> e;
    vector <vector<int>> g(maxn);
    vector <int> us(maxn, 0);

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        g[a].push_back(b);
        e.push_back(edge(a, b, -c));
    }

    vector <int> d(n + 1, inf);
    d[1] = 0;
    int x = -1;

    for (int i = 0; i < n; i++)
    {
        x = -1;
        for (int j = 0; j < m; j++)
            if (d[e[j].a] < inf && d[e[j].b] > d[e[j].a] + e[j].c)
            {
                d[e[j].b] = max(-inf, d[e[j].a] + e[j].c);
                x = e[j].b;
            }
    }

    if (x != -1)
        dfs(g, us, x);

    if (us[n])
    {
        cout << ":)" << endl;
        return 0;
    }
    if (d[n] >= inf)
    {
        cout << ":(" << endl;
        return 0;
    }
    cout << -d[n] << endl;
    return 0;
}
