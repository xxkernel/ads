#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    map<int,int>mp;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        mp[num]++;
    }
    for(auto x:mp){
        if(x.second>=3){
            cout<<x.first<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}