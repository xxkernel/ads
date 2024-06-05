#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    int mn = INT_MAX;
    vector<int>v;
    int sum = 0;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        mn = min(num, mn);
        v.push_back(num);
    }
    for(auto x:v){
        if(x!=mn){
            sum+=(x-mn);
        }
    }
    cout<<sum<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}