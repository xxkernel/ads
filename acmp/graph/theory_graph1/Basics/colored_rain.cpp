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
    vector<int>vertex;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        vertex.push_back(num);
    }
    int cnt = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(v[i][j]==1 && vertex[i]!=vertex[j]){
                cnt++;
            }
        }
    }
    cout<<cnt/2;
}

int main(){
    go
    solve();
}