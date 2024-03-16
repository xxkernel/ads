#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    int mx = 0;
    int ans = 0;
    for(int i = n-1;i>=0;i--){
        mx = max(mx, v[i]);
        ans+=mx;
    }
    cout<<ans;
}

int main(){
    go
    solve();
}