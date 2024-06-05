#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n,m;

void dfs(vector<vector<int>>&a, int t, vector<int>&vis){
    vis[t] = 1;
    for(auto to:a[t]){
        if(!vis[to]){
            dfs(a, to, vis);
        }
    }
}

void solve(){
    cin>>n>>m;
    vector<int>vis(n, 0);
    vector<vector<int>>v(n);
    while(m--){
        int x, y;
        cin>>x>>y;
        x--;
        y--;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int cnt = 0;
    for(int i = 0;i<n;i++){
        if(!vis[i]){
            cnt++;
            dfs(v, i, vis);
        }
    }
    if(cnt==1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}

int main(){
    go
    solve();
}