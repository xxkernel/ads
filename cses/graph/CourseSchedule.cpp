#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m;
const int mxN = 1e5;
vector<int>v[mxN];
vector<int>ts;
int vis[mxN];
bool hasCycle = 0;

void dfs(int t){
    if(hasCycle){
        return;
    }
    vis[t] = 1;
    for(auto to:v[t]){
        if(vis[to]==1){
            hasCycle = 1;
            return;
        }
        if(!vis[to]){
            dfs(to);
        }
    }
    vis[t] = 2;
    ts.push_back(t);
}

void solve(){
    cin>>n>>m;
    while(m--){
        int x, y;
        cin>>x>>y;
        x--;
        y--;
        v[x].push_back(y);
    }
    for(int i = 0;i<n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    if(hasCycle){
        cout<<"IMPOSSIBLE";
        exit(0);
    }
    reverse(ts.begin(), ts.end());
    for(auto x:ts){
        cout<<x+1<<" ";
    }
}

int main(){
    go
    solve();
}