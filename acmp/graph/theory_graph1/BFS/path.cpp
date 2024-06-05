#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

const int INF = 1e9;

vector<int>bfs(vector<vector<int>>&graph, int start){
    vector<int> dist(graph.size(), INF);
    queue<int>q;

    dist[start] = 0;
    q.push(start);

    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int i = 0;i<graph.size();i++){
            if(dist[i]>dist[v]+1 && graph[v][i]){
                dist[i] = dist[v]+1;
                q.push(i);
            }
        }
        // for(auto to:graph[v]){
        //     if(dist[to]>dist[v]+1){
        //         dist[to] = dist[v]+1;
        //         q.push(to);
        //     }
        // }
    }
    return dist;
}

void solve(){
    int n;cin>>n;
    // vector<vector<int>>v(n);
    // for(int i = 0;i<n;i++){
    //     for(int j = 0;j<n;j++){
    //         int num;cin>>num;
    //         if(num==1){
    //             v[i].push_back(j);
    //         }
    //     }
    // }
    vector<vector<int>>v(n, vector<int>(n));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int start, end;
    cin>>start>>end;
    start--;end--;
    vector<int>dist = bfs(v, start);
    if(dist[end]==INF){
        cout<<-1;return;
    }
    cout<<dist[end];
}

int main(){
    go
    solve();
}