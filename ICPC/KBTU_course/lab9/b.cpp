#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

const int mxN = 1e5;
int n, m;

void solve(){
    cin>>n>>m;
    vector<vector<int>>v(n, vector<int>(n, 101));
    for(int i = 0;i<n;i++){
        v[i][i] = 0;
    }
    while(m--){
        int x, y;
        cin>>x>>y;
        x--;
        y--;
        v[x][y] = 1;
        v[y][x] = 1;
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            for(int k = 0;k<n;k++){
                v[j][k] = min(v[j][k], v[j][i] + v[i][k]);
            }
        }
    }
    int sum = 0;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            sum+=v[i][j];
        }
    }
    cout<<sum;
}

int main(){
    go
    freopen("sumdist.in", "r", stdin);
    freopen("sumdist.out", "w", stdout);
    solve();
}