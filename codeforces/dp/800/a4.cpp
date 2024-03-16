#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>v;
    map<int, int>mp;
    int mx = INT_MIN;
    int mn = INT_MAX;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
        mn = min(mn, num);
        mx = max(mx, num);
        mp[num] = i;
    }
    int ans = max(max(n-mp[mx]-1, n-mp[mn]-1), max(mp[mx]+1, mp[mn]+1));
    cout<<ans<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}