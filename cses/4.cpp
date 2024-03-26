#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    ll cnt = 0;
    int mx = 0;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        mx = max(mx, num);
        cnt = cnt+(mx-num);
    }
    cout<<cnt;
}

int main(){
    go
    solve();
}