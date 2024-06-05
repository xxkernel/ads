#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m;
const int mxN = 1e5;
const int MAX = 1e9;
vector<int>v[mxN];
int vis[mxN];
int from[mxN] = {-1};

vector<int> bfs(int start){
    queue<int>q;
    q.push(start);
    vector<int>dist(n, MAX);
    dist[start] = 0;
    while(!q.empty()){
        int t = q.front();
        q.pop();
        for(auto to:v[t]){
            if(dist[to]>dist[t]+1){
                dist[to] = dist[t]+1;
                from[to] = t;
                q.push(to);
            }
        }
    }
    return dist;
}

void solve(){
    cin>>n>>m;
    int start, finish;
    cin>>start>>finish;
    while(m--){
        int x, y;
        cin>>x>>y;
        x--;
        y--;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    vector<int>dist = bfs(start);
    if(dist[finish]!=MAX){
        cout<<dist[finish]<<endl;
        vector<int>p;
        for(int i = finish;i!=-1;i=from[i]){
            p.push_back(i);
        }
        reverse(p.begin(), p.end());
        for(auto t:p){
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