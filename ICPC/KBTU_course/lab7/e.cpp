#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> ve, g;
vector<int> vis, color, in, out, ts;

void dfs1(int v) {
    vis[v] = 1;
    for (int i = 0; i < ve[v].size(); i++) {
        int to = ve[v][i];
        if (vis[to] == 0) {
            dfs1(to);
        }
    }
    ts.push_back(v);
}

void dfs2(int v, int c) {
    color[v] = c;
    for (int i = 0; i < g[v].size(); i++) {
        int to = g[v][i];
        if (color[to] == -1) {
            dfs2(to, c);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    ve.resize(n);
    g.resize(n);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        ve[a].push_back(b);
        g[b].push_back(a);
    }

    vis.assign(n, 0);
    for (int i = 0; i < n; i++) {
        if (vis[i] == 0) {
            dfs1(i);
        }
    }

    color.assign(n, -1);
    int c = 0;
    for (int i = 0; i < n; i++) {
        int v = ts[n - i - 1];
        if (color[v] == -1) {
            dfs2(v, c++);
        }
    }

    int cnt = c;

    in.assign(cnt, 1);
    out.assign(cnt, 1);
    for (int i = 0; i < ve.size(); i++) {
        for (int j = 0; j < ve[i].size(); j++) {
            int to = ve[i][j];
            if (color[i] != color[to]) {
                in[color[to]] = 0;
                out[color[i]] = 0;
            }
        }
    }

    int c1 = 0, c2 = 0;
    for (int i = 0; i < cnt; i++) {
        if (in[i] == 1) {
            c1++;
        }
        if (out[i] == 1) {
            c2++;
        }
    }

    int ans = 0;
    if (cnt != 1) {
        ans = max(c1, c2);
    }

    cout << c1 << " " << ans << endl;

    return 0;
}
