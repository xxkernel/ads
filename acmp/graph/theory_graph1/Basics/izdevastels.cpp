#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    vector<vector<int>>v(n);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            int num;cin>>num;
            v[i].push_back(num);
        }
    }
    int mn = INT_MAX;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                mn = min(v[i][j]+v[j][k]+v[k][i], mn);
            }
        }
    }
    cout<<mn;
}

int main(){
    go
    solve();
}