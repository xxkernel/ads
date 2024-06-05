#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

const int mxN = 1e5;
int MOD = 1e9+7;
int dp[mxN];

void solve(){
    int n;cin>>n;
    dp[0] = dp[1] = 1;
    dp[2] = 2;
    for(int i = 2;i<n;i++){
        dp[i+1] = (dp[i]+2*dp[i-1])%MOD;
    }
    cout<<dp[n];
}

int main(){
    go
    solve();
}