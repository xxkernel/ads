#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n, vector<int>(n, 0));
    while(m--){
        int x, y;cin>>x>>y;
        x--;
        y--;
        v[x][y] = 1;
        v[y][x] = 1;
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(!v[i][j] && i!=j){
                cout<<"NO";
                return;
            }
        }
    }cout<<"YES";
}

int main(){
    go
    solve();
}