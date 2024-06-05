#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

vector<vector<int>> g, gr;
vector<int> used, top, color, repr;

void dfs1(int v) {
    used[v] = 1;
    for(int to : g[v])
        if (!used[to]){
            dfs1(to);
        }
    top.push_back(v);
}

void dfs2(int v, int c) {
    color[v] = c;
    repr[c] = v;
    for (int to : gr[v]){
        if (color[to] == -1){
            dfs2(to, c);
        }
    }
}

void solve(){
int n, m, a, b, i, c;
    cin >> n >> m;

    g.resize(n + 1);
    gr.resize(n + 1);

    for (i = 0; i < m; i++) {
        cin >> a >> b;
        g[a].push_back(b);
        gr[b].push_back(a);
    }

    used.resize(n + 1);
    for (i = 1; i <= n; i++)
        if (!used[i]) dfs1(i);

    color.assign(n + 1, -1);
    repr.assign(n + 1, -1);
    reverse(top.begin(), top.end());

    c = 0;
    for (int v : top)
        if (color[v] == -1) dfs2(v, c++);

    used.assign(c, 1);
    for (i = 1; i < g.size(); i++)
        for (int to : g[i])
            if (color[i] != color[to]) used[color[i]] = 0;

    c = 0;
    for (i = 0; i < used.size(); i++)
        if (used[i]) c++;

    cout << c << endl;

    for (i = 0; i < used.size(); i++){
        if (used[i]) cout << repr[i] << " ";
    }
    cout << endl;
}

int main(){
    go
    solve();
}