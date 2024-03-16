#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }return gcd(b, a%b);
}

void solve(){
    int n, m;
    cin>>n>>m;
    ll dp[max(n,m)+1];
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2;i<=max(m,n);i++){
        dp[i] = (dp[i-1]+dp[i-2])%1000000000;
    }
    cout<<dp[gcd(n,m)]%1000000000;
}

int main(){
    go
    solve();
}