#include <iostream>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int k, n;
    cin >> k >> n;
    ll dp[n+1];
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        dp[i] = 0; 
        for(int j = 1; j <= min(k, i); j++){
            dp[i] += dp[i-j]; 
        }
    }
    cout << dp[n];
}

int main(){
    go
    solve();
    return 0;
}
