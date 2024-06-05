#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m;
const int mxN = 1e5;
vector<int>v[mxN];
vector<int>g[mxN];
int vis[mxN];
vector<int>bg, gb;

void dfs(int t){
    vis[t] = 1;
    for(auto to:v[t]){
        if(!vis[to]){
            dfs(to);
        }
    }
    gb.push_back(t);
}

void dfs_1(int t){
    vis[t] = 0;
    for(auto to:g[t]){
        if(!vis[to]){
            dfs_1(to);
        }
    }
    bg.push_back(t);
}

void solve(){
    cin>>n>>m;
    while(m--){
        int x, y;
        cin>>x>>y;
        x--;
        y--;
        v[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i = 0;i<n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    vector<int>ans;
    for(int i = n-1;i>=0;i--){
        if(vis[gb[i]]){
            dfs_1(gb[i]);
            if(bg.size()==n){
                cout<<"YES";
                return;
            }
            else{
                ans.push_back(gb[i]);
            }
            bg.clear();
        }
    }
    cout<<"NO";
}

int main(){
    go
    solve();
}