#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m;
const int mxN = 1e5;
vector<int>v[mxN], g[mxN];
int vis[mxN];

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
}

int main(){
    go
    solve();
}