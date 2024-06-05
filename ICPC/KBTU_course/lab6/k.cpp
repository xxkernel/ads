#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m;
vector<int>dist;
vector<vector<pair<int,int>>>v;

void bfs(int start){
    dist = vector<int>(n+1, 1e9);
    dist[start] = 0;
    deque<int>dq;
    dq.push_back(start);
    while(dq.size()){
        int t = dq.front();
        dq.pop_front();
        for(int i = 0;i<v[t].size();i++){
            int to = v[t][i].first;
            int w = v[t][i].second;
            if(dist[to]>dist[t]+w){
                dist[to] = dist[t]+w;
                if(w==1){
                    dq.push_back(to);
                }else{
                    dq.push_front(to);
                }
            }
        }
    }
}

void solve(){
    cin>>n>>m;
    v.resize(n+1);
    while(m--){
        int x, y;
        cin>>x>>y;
        v[x].push_back(make_pair(y, 0));
        v[y].push_back(make_pair(x, 1));
    }
    bfs(1);
    if(dist[n]==1e9){
        cout<<-1;
    }else{
        cout<<dist[n];
    }
}

int main(){
    go
    solve();
}