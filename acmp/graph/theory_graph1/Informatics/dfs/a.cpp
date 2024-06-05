#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n;

void dfs(vector<vector<int>>&v, int t, vector<int>&vis){
    vis[t] = 1;
    for(int i = 0;i<n;i++){
        if(v[t][i] && !vis[i]){
            dfs(v, i, vis);
        }
    }
}

void solve(){
    int m;
    cin>>n>>m;
    vector<int>vis(n);
    vector<vector<int>>v(n, vector<int>(n));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>v[i][j];
        }
    }
    dfs(v, m-1, vis);
    int cnt = 0;
    for(int i = 0;i<n;i++){
        cnt+=(vis[i]);
    }
    cout<<cnt;
}

int main(){
    go
    solve();
}