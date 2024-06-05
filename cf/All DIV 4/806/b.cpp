#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    map<char,int>mp;
    int cnt = 0;
    while(n--){
        char a;cin>>a;
        if(mp[a]){
            cnt++;
        }else{
            cnt+=2;
        }
        mp[a]++;
    }
    cout<<cnt<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}