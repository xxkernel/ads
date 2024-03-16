#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>graph, int start){
    vector<int>dist(graph.size(), INT_MAX);
    dist[start] = 0;
    queue<int>q;
    q.push(start);
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        for(int i = 0;i<graph[temp].size();i++){
            if(dist[i]==INT_MAX && graph[temp][i]){
                q.push(i);
                dist[i] = dist[temp]+1;
            }
        }
    }
}