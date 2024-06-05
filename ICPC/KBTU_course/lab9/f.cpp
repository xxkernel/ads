#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

const int INF = 0x3F3F3F3F;

void Relax(int v, int to, int cost, vector<int> &dist, vector<int> &parent, priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> &pq) {
    if (dist[to] > dist[v] + cost) {
        dist[to] = dist[v] + cost;
        pq.push(make_pair(dist[to],to));
        parent[to] = v;
    }
}

void path(int v, vector<int> &parent) {
    if (v == -1) return;
    path(parent[v], parent);
    if (parent[v] != -1) cout << " ";
    cout << v;
}

int main() {
    go
    freopen("distance.in", "r", stdin);
    freopen("distance.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    int s, f;
    cin >> s >> f;

    vector<vector<pair<int, int>>> g(n+1);
    for(int i = 0; i < m; i++) {
        int b, e, w;
        cin >> b >> e >> w;
        g[b].push_back(make_pair(e, w));
        g[e].push_back(make_pair(b, w));
    }

    vector<int> dist(n+1, INF);
    dist[s] = 0;
    vector<int> parent(n+1, -1);
    vector<int> used(n+1, 0);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push(make_pair(0,s));

    while(!pq.empty()) {
        int v = pq.top().second;
        int d = pq.top().first;
        pq.pop();
        if (d > dist[v]) continue;
        for(size_t j = 0; j < g[v].size(); j++) {
            int to = g[v][j].first;
            int cost = g[v][j].second;
            if (!used[to]) Relax(v, to, cost, dist, parent, pq);
        }
        used[v] = 1;
    }

    if (dist[f] == INF)
        cout << "-1\n";
    else {
        cout << dist[f] << endl;
        path(f, parent); cout << endl;
    }

    return 0;
}
