#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n,m;cin>>n>>m;
    long long dp[51][51] = {};
    dp[1][1] = 1;
    for(int i = 2;i<=n;i++){
        for(int j = 2;j<=m;j++){
            dp[i][j] = dp[i-1][j-2]+dp[i-2][j-1];
        }
    }
    cout<<dp[n][m];
}
