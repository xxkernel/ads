#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m;
const int mxN = 1e5;
vector<int>v[mxN];
int vis[mxN];
bool isTrue = 1;

void dfs(int t){
    if(vis[t]==1){
        isTrue = 0;
        return;
    }
    if(vis[t]==2){
        return;
    }
    vis[t] = 1;
    for(auto to:v[t]){
        dfs(to);
    }
    vis[t] = 2;
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
    if(isTrue){
        cout<<"Yes";
        return;
    }cout<<"No";
}

int main(){
    go
    solve();
}