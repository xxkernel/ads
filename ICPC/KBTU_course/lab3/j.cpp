#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int dp[10001];

void solve(){
    int n;cin>>n;
    int v[n];
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    sort(v, v+n);
    dp[1] = dp[2] = v[1]-v[0];
    dp[3] = v[2]-v[0];
    for(int i = 4;i<=n;i++){
        dp[i] = min(dp[i-1], dp[i-2])+v[i-1]-v[i-2]; 
    }
    cout<<dp[n];
}

int main(){
    go 
    solve();
}