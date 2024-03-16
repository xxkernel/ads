#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g(5005);
vector<int> dist(5005);
vector<int> color(5005);
int n;

void bfs(int v){
    queue<int> q;
    q.push(v);
    dist[v] = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for (int i = 0; i < g[u].size(); i++){
            int vu = g[u][i];
            if (dist[vu] > dist[u] + 1){
                dist[vu] = dist[u] + 1;
                q.push(vu);
            }
        }
    }
}
int main(){
    int m, q;
    cin >> n >> m >> q;
    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for (int i = 1; i <= n; i++){
        dist[i] = 1e9;
    }

    while(q--){
        int num, v;
        cin >> num >> v;
        if (num == 1){
            if (color[v] != 1){
                bfs(v);
                color[v] = 1;
            }
        }
        else{
            if (dist[v] == 1e9){
                cout << -1 << endl;
            }
            else{
                cout << dist[v] << endl;
            }
        }
    }
}