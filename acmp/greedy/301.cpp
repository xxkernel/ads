#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>maxi(m);
    int mx_n = n;
    int mn_n = n-1;
    for(int i = 0;i<m;i++){
        maxi[i] = min(9, mx_n);
        mx_n-=maxi[i];
    }
    vector<int>mini(m);
    for(int i = m-1;i>=0;i--){
        mini[i] = min(9, mn_n);
        mn_n-=mini[i];
    }
    mini[0]++;
    for(auto x:maxi){
        cout<<x;
    }cout<<" ";
    for(auto x:mini){
        cout<<x;
    }
}

int main(){
    go
    solve();
}