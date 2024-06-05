#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

vector<vector<int>> g, gr;
vector<int> used, top, color, in, out;

void dfs1(int v) {
    used[v] = 1;
    for (int i = 0; i < g[v].size(); i++) {
        int to = g[v][i];
        if (!used[to]) {
            dfs1(to);
        }
    }
    top.push_back(v);
}

void dfs2(int v, int c) {
    color[v] = c;
    for (int i = 0; i < gr[v].size(); i++) {
        int to = gr[v][i];
        if (color[to] == -1) {
            dfs2(to, c);
        }
    }
}

void solve(){
    int n, m, a, b, c, c1, c2, ans;
    cin >> n >> m;
    g.resize(n + 1);
    gr.resize(n + 1);
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        g[a].push_back(b);
        gr[b].push_back(a);
    }
    used.assign(n, 0);
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            dfs1(i);
        }
    }
    color.assign(n, -1);
    for (int i = 0, c = 0; i < n; i++) {
        int v = top[n - 1 - i];
        if (color[v] == -1) {
            dfs2(v, c++);
        }
    }

    int numComponents = c;
    in.assign(c, 1);
    out.assign(c, 1);
    for (int i = 0; i < g.size(); i++) {
        for (int j = 0; j < g[i].size(); j++) {
            int to = g[i][j];
            if (color[i] != color[to]) {
                in[color[to]] = 0;
                out[color[i]] = 0;
            }
        }
    }

    c1 = c2 = 0;
    for (int i = 0; i < in.size(); i++) {
        if (in[i]) {
            c1++;
        }
        if (out[i]) {
            c2++;
        }
    }

    if (numComponents == 1) {
        ans = 0;
    } else {
        ans = max(c1, c2);
    }

    cout << c1 << " " << ans << endl;
}

int main(){
    go
    solve();
}