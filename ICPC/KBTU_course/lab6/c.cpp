#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n;
bool isTrue = 1;

void dfs(vector<vector<int>>&a, int t, vector<int>&vis){
    vis[t] = 1;
    for(int i = 0;i<n;i++){
        if(a[t][i]){
            if(!vis[i]){
                dfs(a, i, vis);
            }else if(vis[i]==1){
                isTrue = 0;
                return;
            }
        }
    }
    vis[t] = 2;
}

void solve(){
    cin>>n;
    vector<int>vis(n, 0);
    vector<vector<int>>v(n, vector<int>(n));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>v[i][j];
        }
    }
    for(int i = 0;i<n;i++){
        if(!vis[i]){
            dfs(v, i, vis);
        }
    }
    if(!isTrue){
        cout<<1;
    }else
        cout<<0;
    }


int main(){
    go
    solve();
}