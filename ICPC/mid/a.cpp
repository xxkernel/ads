#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;
    vector<string>v(m);
    for(int i = 0;i<m;i++){
        cin>>v[i];
    }
    ll res = 0;
    for(int i = 1;i<m;i++){
        for(int j = 0;j<n;j++){
            if(v[i][j]!=v[i-1][j]){
                res++;
            }
        }
    }
    for(int i = 0;i<m;i++){
        for(int j = 1;j<n;j++){
            if(v[i][j]!=v[i][j-1]){
                res++;
            }
        }
    }
    cout<<res;
}

int main(){
    go
    solve();
}