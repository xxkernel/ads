#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    map<int,int>mp;
    bool isTrue = 1;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        if(mp[num]){
            isTrue = 0;
        }        mp[num]++;
    }
    if(isTrue){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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