#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int t, n;
    cin>>t>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    vector<vector<int>>dp(n+1,vector<int>(t+1,0));
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=t;j++){
            if(v[i-1]<=j){
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-v[i-1]]+v[i-1]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout<<dp[n][t];
}

int main(){
    freopen("knapsack.in", "r", stdin);
    freopen("knapsack.out", "w", stdout);
    go
    solve();
}