#include<bits/stdc++.h>
using namespace std;

int bfs(vector<vector<int>>g, int start, int end){
    vector<int>dist(g.size(), INT_MAX);
    queue<int>q;
    dist[start] = 0;
    q.push(start);
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int i = 0;i<g.size();i++){
            if(g[v][i] && dist[i]==INT_MAX){
                dist[i] = dist[v]+1;
                q.push(i);
            }
        }
    }
    return dist[end] == INT_MAX ?-1:dist[end];
}

int main(){
    int n,start,end;
    cin>>n;
    vector<vector<int>>graph(n);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            int num;cin>>num;
            graph[i].push_back(num);
        }
    }
    cin>>start>>end;
    cout<<bfs(graph, start-1, end-1);
}