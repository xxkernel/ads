#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m;
const int mxN = 1e5;
int MOD = 1e9+7;
vector<int>v[mxN];
vector<int>g[mxN];
vector<int>ts;
int vis[mxN], dp[mxN], act[mxN];

void dfs(int t){
    dp[t] = t==n-1?1:0;
    vis[t] = 1;
    for(auto to:v[t]){
        if(!vis[to]){
            dfs(to);
        }
        dp[t] = (dp[t]+dp[to])%MOD;
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
    }
    dfs(0);
    cout<<dp[0];
}

int main(){
    go
    solve();
}