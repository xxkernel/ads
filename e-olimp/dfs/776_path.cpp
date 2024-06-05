#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
#define MAX 10001

int n, m;

void dfs(vector<vector<int>>&v, int t, vector<int>&vis){
    vis[t] = 1;
    for(auto to:v[t]){
        if(!vis[to]){
            dfs(v, to, vis);
        }
    }
}

void solve(){
    int cnt = 0;
    cin>>n>>m;
    vector<vector<int>>v(n);
    while(m--){
        int x, y;
        cin>>x>>y;
        x--;
        y--;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    vector<int>vis(n, 0);
    for(int i = 0;i<n;i++){
        if(!vis[i]){
            dfs(v, i, vis);
            cnt++;
        }
    }
    cout<<cnt-1;
}

int main(){
    go
    solve();
}