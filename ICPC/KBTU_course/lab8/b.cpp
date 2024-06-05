#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

const int mxN = 1e5;
int n, m;
vector<int>v[mxN];
int vis[mxN], tin[mxN], fup[mxN], is_cut[mxN];
int timer = 0, k = 1;

void dfs(int t, int p){
    vis[t] = 1;
    tin[t] = fup[t] = timer++;
    int children = 0;
    for(auto to:v[t]){
        if(p==to){
            continue;
        }
        if(vis[to]){
            fup[t] = min(fup[t], tin[to]);
        }
        else{
            dfs(to, t);
            fup[t] = min(fup[t], fup[to]);
            if(fup[to]>=tin[t] && p!=-1){
                is_cut[t] = 1;
            }
            children++;
        }
    }
    if(p==-1 && children>1){
        is_cut[t] = 1;
    }
}

void solve(){
    timer = 0;
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
            dfs(i, -1);
        }
    }
    int ans = 0;
    for(int i = 0;i<n;i++){
        ans+=is_cut[i];
    }
    cout<<"Case "<<k<<": "<<ans<<endl;
    for(int i = 0;i<n;i++){
        v[i].clear();
    }
    memset(vis, 0, sizeof(vis));
    memset(tin, 0, sizeof(tin));
    memset(fup, 0, sizeof(fup));
    memset(is_cut, 0, sizeof(is_cut));
    k++;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}