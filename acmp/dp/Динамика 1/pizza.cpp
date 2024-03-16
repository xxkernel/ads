#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    int dp[n+1];
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;
    for(int i = 2;i<=n;i++){
        dp[i] = dp[i-1]+i;
    }
    cout<<dp[n];
}

int main(){
    go
    solve();
}