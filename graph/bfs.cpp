#include<bits/stdc++.h>
using namespace std;

int bfs(vector<vector<int>>graph, int start){
    vector<bool>dist(graph.size(), false);
    dist[start] = 1;
    queue<int>q;
    q.push(start);
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        for(int i = 0;i<graph.size();i++){
            if(!dist[temp] && graph[temp][i]){
                dist[i] = dist[temp]+1;
                q.push(i);
            }
        }
    }
}

int main(){

}