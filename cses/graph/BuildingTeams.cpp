#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n,m;
const int mxN = 1e5;
vector<int>v[mxN];
bool isTrue = 0;
int vis[mxN];

void dfs(int t, int color){
    if(isTrue){
        return;
    }
    vis[t] = color;
    for(auto to:v[t]){
        if(!vis[to]){
            dfs(to, 3-color);
        }
        else if(vis[t]==vis[to]){
            isTrue = 1;
            return;
        }
    }
}

void solve(){
    cin>>n>>m;
    while(m--){
        int x, y;
        cin>>x>>y;
        x--;
        y--;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i = 0;i<n;i++){
        if(!vis[i]){
            dfs(i, 1);
        }
    }
    if(isTrue){
        cout<<"IMPOSSIBLE";
        return;
    }
    for(int i = 0;i<n;i++){
        cout<<vis[i]<<" ";
    }
}

int main(){
    go
    solve();
}