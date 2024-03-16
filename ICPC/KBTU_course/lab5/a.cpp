#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n,m;cin>>n>>m;
    int ans = 0;
    vector<int>v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    if(v[v.size()-1]>m){
        cout<<"Impossible";
        return;
    }
    int x = 0, y = v.size()-1;
    while(x<=y){
        if(v[x]+v[y]<=m){
            x++;
            y--;
        }else{
            y--;
        }
        ans++;
    }
    if(ans==0){
        cout<<"Impossible";
        return;
    }
    cout<<ans;
}

int main(){
    go
    solve();
}