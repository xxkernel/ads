#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int dp[5001];

int solve(int n){
    if(n==1){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int temp = INT_MAX;
    for(int i = 1;i<=n/2;i++){
        temp = max(temp, solve(i)+solve(n-i));
    }
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            temp = max(temp, solve(i)+solve(n/i));  
        }
    }
    return dp[n] = temp;
}

int main(){
    go
    int n;cin>>n;
    memset(dp, -1, sizeof(dp));
    cout<<solve(n);
    // int n;cin>>n;
    // vector<int>dp(n+1, 99999);
    // dp[1] = 1;
    // for(int i = 2;i<=n;i++){
    //     for(int j = 1;j<i/2;j++){
    //         dp[i] = min(dp[i], dp[j]+dp[i-j]);
    //     }
    //     for(int j = 2;j*j<=i;j++){
    //         if(i%j==0){
    //             dp[i] = min(dp[i], dp[j]+dp[i/j]);
    //         }
    //     }
    // }
    // cout<<dp[n];
}