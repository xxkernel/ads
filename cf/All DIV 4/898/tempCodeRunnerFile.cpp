#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    ll sum = 1;
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    v[0]++;
    for(auto x:v){
        sum*=x;
    }cout<<sum<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}