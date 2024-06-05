#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m;
int vis[100];

void dfs(int t, vector<vector<int>>&a){
    vis[t] = 1;
    for(auto to:a[t]){
        if(!vis[to]){
            cout<<t+1<<" "<<to+1<<endl;
            dfs(to, a);
        }
    }
}

void solve(){
    cin>>n>>m;
    vector<vector<int>>v(n);
    while(m--){
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(0, v);
}

int main(){
    go
    solve();
}