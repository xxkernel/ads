#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m, k;
const int mxN = 1e5;
vector<int>v[mxN];
int vis[mxN], g[mxN];
vector<int>temp, god;

void dfs(int t){
    vis[t] = 1;
    for(auto to:v[t]){
        if(!vis[to] && !g[to]){
            temp.push_back(to);
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
    cin>>k;
    while(k--){
        int x;cin>>x;
        x--;
        g[x] = 1;
        god.push_back(x);   
    }
    for(auto x:god){
        if(vis[x]){
            cout<<1<<endl;
            cout<<x+1<<endl;
        }else{
            dfs(x);
            temp.push_back(x);
            sort(temp.begin(), temp.end());
            cout<<temp.size()<<endl;
            for(auto t:temp){
                cout<<t+1<<" ";
            }
            temp.clear();
            cout<<endl;
        }
    }
}

int main(){
    go
    solve();
}