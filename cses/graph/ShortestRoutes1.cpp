#include <bits/stdc++.h>
using namespace std;
#define INF LLONG_MAX


// void dijkstra(vector<vector<pair<int, int>>>& adj, vector<long long>& dist, int start) {
//     int n = adj.size() - 1;

//     priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq; // Min heap
//     pq.push({0, start}); // Distance to start node is 0
//     dist[start] = 0; // Distance to itself is 0

//     while (!pq.empty()) {
//         int u = pq.top().second;
//         long long d = pq.top().first;
//         pq.pop();

//         if (d > dist[u]) continue;

//         for (auto edge : adj[u]) {
//             int v = edge.first;
//             long long w = edge.second;
//             if (dist[u] + w < dist[v]) {
//                 dist[v] = dist[u] + w;
//                 pq.push({dist[v], v});
//             }
//         }
//     }
// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }

    vector<long long> dist(n + 1, INF); 
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq; 
    pq.push({0, 1}); 
    dist[1] = 0; 

    while (!pq.empty()) {
        int u = pq.top().second;
        long long d = pq.top().first;
        pq.pop();

        if (d > dist[u]) continue;

        for (auto edge : adj[u]) {
            int v = edge.first;
            long long w = edge.second;
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << dist[i] << " ";
    }
    cout << endl;

    return 0;
}
