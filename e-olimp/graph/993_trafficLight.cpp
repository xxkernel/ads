#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m;

void solve(){
    cin>>n>>m;
    vector<vector<int>>v(n, vector<int>(n, 0));
    while(m--){
        int x, y;
        cin>>x>>y;
        x--;y--;
        v[y][x] = 1;
        v[x][y] = 1;
    }
    for(int i = 0;i<n;i++){
        int cnt = 0;
        for(int j = 0;j<n;j++){
            if(v[i][j]){
                cnt++;
            }
        }
        cout<<cnt<<" ";
    }
}

int main(){
    go
    solve();
}