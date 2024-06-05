#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m, q;
const int mxN = 500;
ll v[mxN][mxN];

void solve(){
    cin>>n>>m>>q;
    memset(v, 0x3f, sizeof(v));
    while(m--){
        ll x, y, w;
        cin>>x>>y>>w;
        x--;y--;
        v[x][y] = min(v[x][y], w);
        v[y][x] = min(v[y][x], w);
    }
    for(int i = 0;i<n;i++){
        v[i][i] = 0;
    }
    for(int k = 0;k<n;k++){
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                v[i][j] = min(v[i][j], v[i][k]+v[k][j]);
            }
        }
    }
    while(q--){
        int x, y;
        cin>>x>>y;
        x--;
        y--;
        if(v[x][y]>=1e18){
            cout<<-1<<endl;
        }
        else{
            cout<<v[x][y]<<endl;
        }
    }
}

int main(){
    go
    solve();
}