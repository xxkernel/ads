#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    int v[n];
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    vector<int>dp(n, 1);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i;j++){
            if(v[j]<v[i]){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }
    int ans = dp[0];
    for(int i = 1;i<n;i++){
        ans = max(ans, dp[i]);
    }
    cout<<ans;
}

int main(){
    go
    solve();
}