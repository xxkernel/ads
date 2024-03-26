#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    map<int,int>mp;
    for(int i = 1;i<n;i++){
        int num;cin>>num;
        mp[num]++;
    }
    for(int i = 1;i<=n;i++){
        if(!mp[i]){
            cout<<i;
            return;
        }
    }
}

int main(){
    go
    solve();
}