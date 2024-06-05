#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int v[100][100];
int vis[100];
int k = -1;
int n, t;

void dfs(int t){
    if(vis[t]){
        return;
    }
    k++;
    vis[t] = 1;
    for(int i = 0;i<n;i++){
        if(v[t][i]){
            dfs(i);
        }
    }
}

void solve(){
    cin>>n>>t;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>v[i][j];
        }
    }
    t--;
    dfs(t);
    cout<<k;
}

int main(){
    go
    solve();
}