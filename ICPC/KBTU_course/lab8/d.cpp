#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

const int mxN = 1e5;
vector<int>v[mxN];
vector<pair<int,int>>bg;
int vis[mxN], fup[mxN], tin[mxN];
int timer = 0;
int n, m;
int cnt = 0;

void dfs_1(int t, int j){
    vis[t] = 1;
    cnt++;
    for(int i = 0;i<n;i++){
        if(v[t][i]){
            if(!vis[i]){
                dfs_1(i, j);
            }
        }
    }
}

void dfs(int t, int p){
    vis[t] = 1;
    tin[t] = fup[t] = timer++;
    for(int i = 0;i<v[t].size();i++){
        if(!v[t][i]){
            continue;
        }
        if(p==i){
            continue;
        }
        if(vis[i]){
            fup[t] = min(fup[t], tin[i]);
        }
        else{
            dfs(i, t);
            fup[t] = min(fup[t], fup[i]);
            if(fup[i]>tin[t]){
               bg.push_back({t, i});
            }
        }
    }
}

void solve(){
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            v[i].push_back(0);
        }
    }
    while(m--){
        int x, y;
        cin>>x>>y;
        x--;
        y--;
        v[x][y] = v[y][x] = 1;
    }
    for(int i = 0;i<n;i++){
        if(!vis[i]){
            dfs(i, -1);
        }   
    }
    int ans = 0;
    for(auto x:bg){
        int i = x.first;
        int j = x.second;
        v[i][j] = v[j][i] = 0;
        dfs(i, j);
    }
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}