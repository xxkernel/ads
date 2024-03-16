#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

long long dp[51];

void solve(){
    int n;cin>>n;
    dp[1] = 3;
    for(int i = 2;i<=n;i++){
        dp[i] = dp[i-1]*2;
    }
    cout<<dp[n];
}

int main(){
    go
    solve();
}