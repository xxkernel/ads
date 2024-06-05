#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

const int mxN = 1e5;
int n, m;
vector<int>v[mxN];
int vis[mxN];

void dfs(int t){
    vis[t] = 1;
    for(auto to:v[t]){
        if(!vis[to]){
            cout<<t+1<<" "<<to+1<<endl;
            dfs(to);
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
            dfs(i);
        }
    }
}

int main(){
    go
    solve();
}