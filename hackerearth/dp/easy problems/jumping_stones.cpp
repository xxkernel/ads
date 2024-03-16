#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int dp[100001];


void solve(){
    int n, k;
    cin>>n>>k;
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2;i<=n;i++){
        for(int j = 1;j<=min(i, k);j++){
            dp[i]+=dp[i-j];
            dp[i]%=1000000007;
        }
    }
    cout<<dp[n];
}

int main(){
    go;
    solve();
}