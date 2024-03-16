#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;
    int v[n][m];
    int dp[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>v[i][j];
        }
    }
    dp[0][0] = v[0][0];
    for(int i = 1;i<m;i++){
        dp[0][i] = dp[0][i-1]+v[0][i];
    }
    for(int i = 1;i<n;i++){
        dp[i][0] = dp[i-1][0]+v[i][0];
    }
    for(int i = 1;i<n;i++){
        for(int j = 1;j<m;j++){
            dp[i][j] = v[i-1][j]+v[i][j]+dp[i][j-1];
            v[i][j]+=v[i-1][j]; 
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<dp[i][j]<<" ";
        }cout<<endl;
    }
}

int main(){
    go
    solve();
}