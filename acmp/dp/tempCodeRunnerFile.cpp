#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int v[21][21];    
int dp[21][21];

int main(){
    go
    int n, m;
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>v[i][j];
        }
    }
    for(int i = 1; i < n; i++){
        dp[i][0] = dp[i-1][0] + v[i][0];
    }
    for(int j = 1; j < m; j++){
        dp[0][j] = dp[0][j-1] + v[0][j];
    }
    dp[0][0] = v[0][0];
    for(int i = 1;i<n;i++){
        for(int j = 1;j<m;j++){
            dp[i][j] = min(dp[i-1][j], dp[i][j-1])+v[i][j];
        }
    }
    cout<<dp[n-1][m-1];
}