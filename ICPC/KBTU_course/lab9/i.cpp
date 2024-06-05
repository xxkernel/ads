#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define oo 0x3F3F3F3F

struct edge {
    int node, dist;
    edge(int node, int dist) : node(node), dist(dist) {}
    bool operator< (const edge a) const {
        return dist > a.dist;
    }
};

vector<int> used, dist, mult;

vector<vector<edge>> g;
priority_queue<edge> pq;

void Relax(int v, int to, int cost) {
    if (dist[to] == dist[v] + cost)
        mult[to] = 1;
    if (dist[to] > dist[v] + cost) {
        dist[to] = dist[v] + cost;
        pq.push(edge(to, dist[to]));
        mult[to] = mult[v];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    int temp;
    for (int i = 0; i < k; i++)
        cin >> temp;

    g.resize(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        g[a].push_back(edge(b, w));
        g[b].push_back(edge(a, w));
    }

    dist.assign(n + 1, oo);
    dist[1] = 0;
    used.assign(n + 1, 0);
    mult.assign(n + 1, 0);

    pq.push(edge(1, 0));
    while (!pq.empty()) {
        edge e = pq.top();
        pq.pop();
        int v = e.node;

        if (e.dist > dist[v]) continue;

        for (size_t j = 0; j < g[v].size(); j++) {
            int to = g[v][j].node;
            int cost = g[v][j].dist;
            if (!used[to]) Relax(v, to, cost);
        }
    }

    if (mult[n] == 1)
        cout << "yes\n";
    else
        cout << "no\n";

    return 0;
}
