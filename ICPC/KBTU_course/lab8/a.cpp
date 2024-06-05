#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
#define MAX 101

int v[MAX][MAX];
int used[MAX], d[MAX], up[MAX];
int n, m, tim;

void dfs(int t, int p = -1) {
    used[t] = 1;
    d[t] = up[t] = tim++;

    for (int i = 1; i <= n; i++) {
        if (v[t][i] == 0) continue;
        if (i == p) continue;
        if (used[i])
            up[t] = min(up[t], d[i]);
        else {
            dfs(i, t);
            up[t] = min(up[t], up[i]);
        }
    }
}

void solve() {
    cin >> n >> m;
    memset(v, 0, sizeof(v));
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[a][b] = v[b][a] = 1;
    }
    int v;
    cin >> v;
    tim
 = 1;
    memset(used, 0, sizeof(used));
    dfs(v);
    for (int i = 1; i <= n; i++)
        cout << d[i] << " " << up[i] << endl;
}

int main() {
    go
    solve();
}