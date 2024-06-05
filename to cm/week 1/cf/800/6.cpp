#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    ll sum = 0;
    map<int,int>mp;
    for(int i = 0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        mp[v[i]%3]++;
    }   
    if(n==1){
        cout<<1<<endl;
    }
    else if(sum%3==0){
        cout<<0<<endl;
    }else{
        if((sum%3==1 && mp[1]) || sum%3==2){
            cout<<1<<endl;
        }else{
            cout<<2<<endl;
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