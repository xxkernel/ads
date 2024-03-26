#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    map<int,vector<int>>mp;
    while(m--){
        int x, y;
        cin>>x>>y;
        mp[x].push_back(y);
    }
    cout<<n<<endl;
    for(int i = 1;i<=n;i++){
        if(!mp[i].size()){
            cout<<0<<endl;
        }else{
            cout<<mp[i].size()<<" ";
            for(auto x:mp[i]){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
}

int main(){
    go
    solve();
}