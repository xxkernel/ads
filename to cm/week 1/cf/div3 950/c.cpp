#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    vector<int>b(n);
    map<int,int>mp;
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    for(int i = 0;i<n;i++){
        cin>>b[i];
        mp[b[i]]++;
    }
    for(int i = 0;i<n;i++){
        if(v[i]!=b[i]){
            mp[b[i]]++;
        }
    }
    int m;
    cin>>m;
    bool isTrue = 1;
    while(m--){
        int x;cin>>x;
        if(!mp[x]){
            isTrue = 1;
            continue;
        }
        if(mp[x]>=2){
            mp[x]--;
        }
        if(mp[x]){
            isTrue = 0;
        }
    }
    for(auto x:mp){
        if(x.second>=2){
            cout<<"NO"<<endl;
            return;
        }
    }
    if(isTrue){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
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