#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

char v[100][100];
int vis[100][100];
int n, m;
int sum;
int k = 1;

void dfs(int x, int y){
    vis[x][y] = 1;
    sum++;
    if(x+1<n && v[x+1][y]!='#' && !vis[x+1][y]){
        dfs(x+1, y);
    }
    if(x-1>=0&& v[x-1][y]!='#' && !vis[x-1][y]){
        dfs(x-1, y);
    }
    if(y+1<m && v[x][y+1]!='#' && !vis[x][y+1]){
        dfs(x, y+1);
    }
    if(y-1>=0 && v[x][y-1]!='#' && !vis[x][y-1]){
        dfs(x, y-1);
    }
}

void solve(){
    memset(vis, 0, sizeof(vis));
    cin>>m>>n;
    int x, y;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>v[i][j];
            if(v[i][j]=='@'){
                x = i;
                y = j;
            }
        }
    }
    sum = 0;
    dfs(x, y);
    cout<<"Case "<<k<<": "<<sum<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
        k++;
    }
}