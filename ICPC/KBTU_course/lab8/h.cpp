#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m;
const int mxN = 1e5;
vector<int>v[mxN];
int up[mxN], d[mxN], vis[mxN];
int br = 0;
int tim = 1;

void dfs(int t, int p){
    vis[t] = 1;
    d[t] = up[t] = tim++;
    for(auto to:v[t]){
        if(to==p){
            continue;
        }
        if(!d[to]){
            dfs(to, t);
            up[t] = min(up[t], up[to]);
            if(up[to]>d[t]){
                br++;
            }
        }else{
            up[t] = min(up[t], d[to]);
        }
    }
}

void solve(){
    cin>>n>>m;
    while(m--){
        int x, y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
        for(int i = 0;i<n;i++){
            if(!vis[i]){
                dfs(i, -1);
            }
        }
        cout<<br<<endl;
        br = 0;
        tim = 1;
        memset(vis, 0, sizeof(vis));
        memset(d, 0, sizeof(d));
        memset(up, 0 , sizeof(up));
    }
    memset(vis, 0, sizeof(vis));
    memset(d, 0, sizeof(d));
    memset(up, 0 , sizeof(up));
    for(int i = 0;i<n;i++){
        v[i].clear();
    }
}

int main(){
    go
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
}