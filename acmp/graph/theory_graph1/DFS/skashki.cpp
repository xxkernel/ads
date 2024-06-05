#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, t;
int vis[101];

void dfs(int t, vector<vector<int>>v){
    vis[t] = 1;
    for(int i = 0;i<n;i++){
        if(!vis[i] && v[t][i]){
            dfs(i, v);
        }
    }
}

void solve(){
    cin>>n>>t;
    vector<vector<int>>v(n, vector<int>(n, 0));
    int cnt = 0;
    while(true){
        int x, y;
        cin>>x;
        if(x==0){
            break;
        }
        cin>>y;
        x--;y--;
        v[x][y] = 1;
    }
    t--;
    dfs(t, v);
    for(int i = 0;i<n;i++){
        if(!vis[i]){
            cout<<"No";
            return;
        }
    }cout<<"Yes";
}

int main(){
    go
    solve();
}