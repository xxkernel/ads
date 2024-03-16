#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>v;
    int dp[n+1];
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    int mx = 1;
    int ans = 1;
    for(int i = 0;i<v.size()-1;i++){
        if(v[i]<v[i+1]){
            mx++;
        }else{
            mx = 1;
        }ans = max(ans, mx);
    }
    cout<<ans;
}

int main(){
    go
    solve();
}