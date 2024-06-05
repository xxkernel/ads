#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

const int MAXN = 1e5 + 7;
int n, m, k, pre, cur;
int ord[MAXN], deg[MAXN];
vector<int> G[MAXN];
set<int> S;
set<int, greater<int>> done;
vector<pair<int, int>> edge;

void toposort(int u) {
    ord[++cur] = u;
    pre = u;
    for (int v : G[u]) 
        if (--deg[v] == 0) 
            S.insert(v);
}

void solve(){
        cin >> n >> m >> k;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        deg[v]++;
    }

    for (int i = 1; i <= n; i++) 
        if (deg[i] == 0) 
            S.insert(i);

    while (cur < n) {
        if (S.empty()) {
            int u = *done.begin();
            done.erase(u);
            edge.emplace_back(pre, u);
            toposort(u);
        } else if (!k || (S.size() == 1 && (done.empty() || *S.begin() > *done.begin()))) {
            int u = *S.begin();
            S.erase(u);
            toposort(u);
        } else {
            k--;
            done.insert(*S.begin());
            S.erase(S.begin());
        }
    }

    for (int i = 1; i <= n; i++) 
        cout << ord[i] << " ";
    cout << endl;

    cout << edge.size() << endl;
    for (auto p : edge) 
        cout << p.first << " " << p.second << endl;
}

int main() {
    go;
    solve();
}
