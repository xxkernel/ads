#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("lepus.in", "r", stdin);
    freopen("lepus.out", "w", stdout);
    
    // int n;
    // cin >> n;
    // vector<int>dp(n+1, -1);
    // char a;
    // cin >> a;
    // dp[1] = 0;
    // for(int i = 2; i <= n; i++){
    //     cin >> a;
    //     if(a == 'w') {
    //         continue;
    //     }
    //     if(i >= 5) {
    //         dp[i] = max(max(dp[i-1], dp[i-3]), dp[i-5]);
    //     } else if(i >= 3) {
    //         dp[i] = max(dp[i-1], dp[i-3]);
    //     } else {
    //         dp[i] = dp[i-1];
    //     }
    //     if(a == '"') {
    //         dp[i]++;
    //     }
    // }
    
    // if(dp[n] == -1) {
    //     cout << -1; 
    // } else {
    //     cout << dp[n];
    // }
    
    int n;cin>>n;
    int dp[1005];
    int v[n];
    for(int i = 0;i<n;i++){
        char a;cin>>a;
        if(a=='w'){
            v[i] = -999;
        }else if(a=='"'){
            v[i] = 1;
        }else{
            v[i] = 0;
        }
    }
    for(int i = 0;i<5;i++){
        dp[i] = -999;
    }
    dp[5] = v[0];
    for(int i = 6;i<n+5;i++){
        dp[i] = max(max(dp[i-1], dp[i-3]), dp[i-5])+v[i-5];
    }
    if(dp[n+4]>=0){
        cout<<dp[n+4];
    }else{
        cout<<-1;
    }
}
