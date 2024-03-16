#include<bits/stdc++.h>
using namespace std;

// void bfs(vector<vector<int>>graph, int start, int s){
//     vector<int>dist(graph.size(), INT_MAX);
//     queue<int>q;
//     unordered_map<int, vector<int>>mp;
//     q.push(start);
//     dist[start] = 0;
//     while(!q.empty()){
//         int v = q.front();
//         q.pop();
//         for(int i = 0;i<graph[v].size();i++){
//             if(dist[i]==INT_MAX){
//                 dist[i] = dist[v]+1;
//                 q.push(i);
//                 mp[v].push_back(i);
//             }
//         }
//     }
// }
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>graph(n);
    for(int i = 0;i<graph.size();i++){
        for(int j = 0;j<m;j++){
            graph[i].push_back(0);
        }
    }
    for(int i = 0;i<m;i++){
        int v, u;
        cin>>v>>u;
        // graph[v-1].push_back(1);
        // graph[u-1].push_back(1);
        graph[u-1][v-1] = 1;
        graph[v-1][u-1] = 1;
    }
    int f, s;
    cin>>f>>s;
    unordered_map<int, vector<int>>mp;
    for(int i = 0;i<graph.size();i++){
        for(int j = 0;j<m;j++){
            if(graph[i][j]){
                mp[i+1].push_back(j+1);
            }
        }
    }
    
    mp[f].push_back(f);
    mp[s].push_back(s);
    set<int>set;
    for(auto x:mp[s]){
        set.insert(x);
    }
    int size = set.size();
    for(auto x:mp[f]){
        set.insert(x);
    }
    if(set.size()==size){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}