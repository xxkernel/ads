#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

}

int main(){
    go
    int n;
    cin >> n;
    int dp[n+1];
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    cout<<dp[n];
}