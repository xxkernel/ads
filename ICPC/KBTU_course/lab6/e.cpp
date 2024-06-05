#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m;
const int MAX = 1e9;
vector<int>bfs(vector<vector<int>>&a, int start, vector<int>&from){
    vector<int>dist(n, MAX);
    queue<int>q;

    dist[start] = 0;
    q.push(start);
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(auto to:a[v]){
            if(dist[to]>dist[v]+1){
                dist[to] = dist[v]+1;
                from[to] = v;
                q.push(to);
            }
        }
    }
    return dist;
}

vector<int>getPath(vector<int>&from, int finish){
    vector<int>path;
    for(int i = finish;i!=-1;i=from[i]){
        path.push_back(i);
    }
    reverse(path.begin(), path.end());
    return path;
}

void solve(){
    cin>>n>>m;
    int start, end;
    cin>>start>>end;
    start--;end--;
    vector<vector<int>>v(n);
    vector<int>from(n, -1);
    while(m--){
        int x,y;
        cin>>x>>y;
        x--;y--;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    vector<int>dist = bfs(v,start, from);
    if(dist[end]!=MAX){
        cout<<dist[end]<<endl;
        for(int t:getPath(from, end)){
            cout<<t+1<<" ";
        }
    }else{
        cout<<-1;
    }
}

int main(){
    go
    solve();
}
