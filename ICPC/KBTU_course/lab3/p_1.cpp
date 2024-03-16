#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    int a[n+1];
    for(int i = 1;i<=n;i++){
        cin>>a[i];
    }
    int m;cin>>m;
    int b[m+1];
    for(int i = 1;i<=m;i++){
        cin>>b[i];
    }
    int dp[n+1][m+1];
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=m;j++){
            if(i==0||j==0){
                dp[i][j] = 0;
            }
            else if(a[i]==b[j]){
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    int temp = dp[n][m];
    vector<int>v(temp);
    int i = n, j = m;
    while(i>0 && j>0){
        if(a[i]==b[j]){
            v[temp-1] = a[i];
            i--;
            j--;
            temp--;
        }else if(dp[i-1][j]>dp[i][j-1]){
            i--;
        }else{
            j--;
        }
    }
    cout<<v.size()<<endl;

    int f[v.size()];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i;j++){
            if(v[j]>v[i]){
                f[i] = max(f[i], f[j]+1);
            }
        }
    }
        
}

int main(){
    go
    solve();
}