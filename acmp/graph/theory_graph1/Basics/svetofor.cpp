#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n,m;cin>>n>>m;
    vector<vector<int>>v(n);
    while(m--){
        int x, y;
        cin>>x>>y;
        x--;
        y--;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(auto x:v){
        cout<<x.size()<<" ";
    }
}

int main(){
    go
    solve();
}