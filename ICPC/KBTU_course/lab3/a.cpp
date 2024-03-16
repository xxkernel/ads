#include<bits/stdc++.h>
using namespace std;

int v[10001];
int dp[10001];

int main(){
    freopen("ladder.in", "r", stdin);
    freopen("ladder.out", "w", stdout);
    int n;cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>v[i];
    }
    dp[0] = 0;
    dp[1] = v[1];
    for(int i = 2;i<=n;i++){
        dp[i] = v[i]+max(dp[i-1], dp[i-2]);
    } 
    cout<<dp[n];
}