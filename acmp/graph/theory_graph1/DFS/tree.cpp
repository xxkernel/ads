#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, c=0;
bool isTrue = 1;

void dfs(int t, vector<vector<int>>v, int vis[], int p){
    vis[t] = 1;
    c++;
    for(int i = 0;i<n;i++){
        if(v[t][i] && i!=p){
            if(vis[i]){
                isTrue = 0;
            }else{
                dfs(i, v, vis, t);
            }
        }
    }
}

void solve(){
    cin>>n;
    vector<vector<int>>v(n, vector<int>(n));
    int vis[n] = {0};
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>v[i][j];
        }
    }
    dfs(0, v, vis, -1);
    (!isTrue || c!=n)?cout<<"NO":cout<<"YES";
}

int main(){
    go
    solve();
}