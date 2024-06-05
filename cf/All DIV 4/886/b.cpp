#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    map<int,int>mp;
    int mx = INT_MIN;
    for(int i = 0;i<n;i++){
        int x, y;
        cin>>x>>y;
        if(x<=10){
            mx = max(y, mx);
        }
        mp[i] = y;
    }
    for(auto x:mp){
        if(x.second==mx){
            cout<<x.first+1<<endl;
            return;
        }
    }
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}