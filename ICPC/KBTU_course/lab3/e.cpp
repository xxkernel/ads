#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int> > dp(n + 2, vector<int>(n + 2, INT_MIN));

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cin >> dp[i][j];
        }
    }
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= i; j++){
            dp[i][j] += max(dp[i - 1][j], dp[i - 1][j - 1]);
        }
    }
    int ans = INT_MIN;
    for(int i = 1; i <= n; i++){
        ans = max(ans, dp[n][i]);
    } 
    cout<<ans<<endl;
}