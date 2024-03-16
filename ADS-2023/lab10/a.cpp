#include<bits/stdc++.h>
using namespace std;

int bfs(vector<vector<int>>graph, int start, int cnt){
    queue<int>q;
    q.push(start-1);
    vector<int>dist(graph.size(), INT_MAX);
    dist[start-1] = 0;
    while(q.empty()){
        int v = q.front();
        q.pop();
        for(int)
    }
}

int main(){
    int n,m;
    int cnt = 0;
    cin>>n>>m;
    vector<vector<int>>graph(n);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            int num;cin>>num;
            if(num==1){
                cnt++;
            }
            graph[i].push_back(num);
        }
    }

}