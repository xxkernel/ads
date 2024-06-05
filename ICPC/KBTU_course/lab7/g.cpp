#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m;
int MOD = 1e9+7;
const int mxN = 1e5;
int res = 0;
vector<int>v[mxN];
int vis[mxN], act[mxN];
int dp[mxN];

void dfs(int t){
    // if(depth>n){
    //     return;
    // }
    // if(t==n-1){
    //     res = (res+1)%MOD;
    //     return;
    // }
    // vis[t] = 1;
    // for(auto to:v[t]){
    //     if(!vis[to]){
    //         dfs(to, depth+1);
    //     }
    // }
    // vis[t] = 0;
    dp[t] = t==n-1?1:0;
    vis[t] = 1;
    act[t] = 1;
    for(auto to:v[t]){
        if(!vis[to]){
            dfs(to);
        }
        dp[t] = (dp[t]+dp[to])%MOD;
    }
    act[t] = 0;
}

void solve(){
    cin>>n>>m;
    while(m--){
        int x,y;
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