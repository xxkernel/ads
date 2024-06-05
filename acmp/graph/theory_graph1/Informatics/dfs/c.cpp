#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n;
int v[100][100];
int vis[100];
bool isTrue = 1;
int c = 0;

void dfs(int t, int p){
    vis[t] = 1;
    c++;
    for(int i = 0;i<n;i++){
        if(i!=p && v[t][i]){
            if(vis[i]){
                isTrue = 0;
            }else{
                dfs(i, t);
            }
        }
    }
}

void solve(){
    cin>>n;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>v[i][j];
        }
    }
    dfs(0, -1);
    (!isTrue ||c!=n)?cout<<"NO":cout<<"YES";
}

int main(){
    go
    solve();
}