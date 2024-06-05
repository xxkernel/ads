#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    map<char, int>mp;
    for(int i = 0;i<n;i++){
        char a;cin>>a;
        mp[a]++;
    }
    if(n!=5){
        cout<<"NO"<<endl;
        return;
    }else{
        if(mp['T'] && mp['i'] && mp['r'] && mp['u'] && mp['m']){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
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