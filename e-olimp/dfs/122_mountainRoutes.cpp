#include <bits/stdc++.h>
using ll = long long;
#define MAX 55
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, k, a, b, d;
int res = 0;
int v[MAX][MAX];
int vis[MAX];

void dfs(int a, int depth){
    if(depth>d){
        return;
    }
    if(a==b){
        res++;
        return;
    }
    vis[a] = 1;
    for(int i = 1;i<=n;i++){
        if(v[a][i] && !vis[i]){
            dfs(i, depth+1);
        }
    }
    vis[a] = 0;
}

void solve(){
    memset(v, 0, sizeof(v));
    memset(vis, 0, sizeof(vis));
    cin>>n>>k>>a>>b>>d;
    while(k--){
        int x, y;
        cin>>x>>y;
        v[x][y] = 1;
    }
    dfs(a, 0);
    cout<<res;
}

int main(){
    go
    solve();
}



