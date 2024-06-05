#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m;
const int mxN = 1e3;
string v[mxN];

bool e(int i, int j){
    return i>=0 && i<n && j>=0 && j<m && v[i][j]=='.';
}

void dfs(int i, int j){
    v[i][j] = '#';
    if(e(i+1, j)){
        dfs(i+1, j);
    }
    if(e(i-1, j)){
        dfs(i-1, j);
    }
    if(e(i, j+1)){
        dfs(i, j+1);
    }
    if(e(i, j-1)){
        dfs(i, j-1);
    }
}

void solve(){
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    int cnt = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(e(i, j)){
                cnt++;
                dfs(i, j);
            }
        }
    }
    cout<<cnt;
}

int main(){
    go
    solve();
}