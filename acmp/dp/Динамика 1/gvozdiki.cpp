#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    int dp[n];
    sort(v.begin(), v.end());
    dp[0] = 0;
    dp[1] = v[1]-v[0];
    dp[2] = v[2]-v[0];
    for(int i = 3;i<n;i++){
        dp[i] = min(dp[i-1], dp[i-2])+v[i]-v[i-1];
    }
    cout<<dp[n-1];
}

int main(){
    go
    solve();
}