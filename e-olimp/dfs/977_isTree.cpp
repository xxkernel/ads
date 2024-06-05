#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

const int mxN = 1e5;
int n, m;
vector<int>v[mxN];
int vis[mxN];
bool isTree = 1;
int c = 0;

void dfs(int t, int p){
    vis[t] = 1;
    c++;
    for(int i = 0;i<n;i++){
        if(v[t][i] && i!=p){
            if(vis[i]){
                isTree = 0;
            }
            else{
                dfs(i, t);
            }
        }
    }
}

void solve(){
    cin>>n;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            int x;cin>>x;
            v[i].push_back(x);
        }
    }
    dfs(0, -1);
    if(!isTree || c!=n){
        cout<<"NO";
        return;
    }cout<<"YES";
}

int main(){
    go
    solve();
}