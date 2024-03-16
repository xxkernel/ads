#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    string s, t;
    cin>>s>>t;
    // char x[s.size()+1], y[t.size()+1];
    // for(int i = 0;i<s.size();i++){
    //     x[i] = s[i-1];
    // }
    // for(int i = 0;i<t.size();i++){
    //     y[i] = t[i-1];
    // }
    int dp[s.size()+1][t.size()+1];    
    for(int i = 0;i<=s.size();i++){
        for(int j = 0;j<=t.size();j++){
            if(i==0 || j==0){
                dp[i][j] = 0;
            }
            else if(s[i-1]==t[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    int temp = dp[s.size()][t.size()];
    vector<char>res(temp);
    int i = s.size(), j = t.size();
    while(j>0 && i>0){
        if(s[i-1]==t[j-1]){
            res[temp-1] = s[i-1];
            i--;
            j--;
            temp--;
        }
        else if(dp[i-1][j]>dp[i][j-1]){
            i--;
        }else{
            j--;
        }
    }
    for(auto x:res){
        cout<<x;
    }
}

int main(){
    go
    solve();
}