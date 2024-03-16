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