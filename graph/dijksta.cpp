#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, e;
    cin>>n>>e;
    vector<pair<int,int>>graph[n];

    for(int i = 0;i<e;i++){
        int u, v, w;
        cin>>u>>v>>w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    
    vector<int>dist(n, INT_MAX);
    vector<bool>visited(n, false);
    int src = 0;
    dist[src] = 0;

    for(int i = 0;i<n;i++){
        int v = -1;
        for(int j = 0;j<n;j++){
            if(!visited[v] && (v==-1 || dist[v]>dist[j])){
                v = j;
            }
        }
        if(dist[v]==INT_MAX){
            break;
        }
        visited[v] = 1;
        for(auto it = graph[v].begin();it!=graph[v].end();it++){
            int u = it->first;
            int w = it->second;
            if(dist[u]>dist[v]+w){
                dist[u] = dist[v]+w;
            }
        }
    }
    for(int i = 0;i<n;i++){
        cout<<dist[i]<<endl;
    }

}

const int INF = 1000000000;
vector<vector<pair<int, int>>> adj;

void dijkstra(int s, vector<int> & d, vector<int> & p) {
    int n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);

    d[s] = 0;
    using pii = pair<int, int>;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, s});
    while (!q.empty()) {
        int v = q.top().second;
        int d_v = q.top().first;
        q.pop();
        if (d_v != d[v])
            continue;

        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;

            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
                q.push({d[to], to});
            }
        }
    }
}