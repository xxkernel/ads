#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m;
const int mxN = 1e5;
vector<int>v[mxN];
int vis[mxN];

int cnt = 0;
void dfs(int t){
    vis[t] = 1;
    for(auto to:v[t]){
        if(!vis[to]){
            dfs(to);
        }
    }
}

void solve(){
    vector<int>ans;
    cin>>n>>m;
    while(m--){
        int x, y;
        cin>>x>>y;
        x--;
        y--;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(0);
    for(int i = 0;i<n;i++){
        if(!vis[i]){
            ans.push_back(i);
            dfs(i);
        }
    }
    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<1<<" "<<x+1<<endl;
    }
}

int main(){
    go
    solve();
}