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
int dp[mxN], path[mxN];

void dfs(int t){
    dp[t] = t==n-1?1:-1e9;
    vis[t] = 1;
    act[t] = 1;
    for(auto to:v[t]){
        if(act[to]){
            cout<<"IMPOSSIBLE";
            exit(0);
        }
        else{
            if(!vis[to]){
                dfs(to);
            }
        }
        if(dp[to]+1>dp[t]){
            path[t] = to;
            dp[t] = dp[to]+1;
        }
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
    for(int i = 0;i<n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    if(dp[0]<0){
        cout<<"IMPOSSIBLE";
    }else{
        vector<int>ans;
        ans.push_back(0);
        // for(int i = 0;i<n-1;i = path[i]){
        //     ans.push_back(i);
        // }
        int i = 0;
        while(i^n-1){
            i = path[i];
            ans.push_back(i);
        }
        cout<<ans.size()<<endl;
        for(auto x:ans){
            cout<<x+1<<" "; 
        }
    }
}

int main(){
    go
    solve();
}