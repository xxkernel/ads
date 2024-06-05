#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m;

void dfs(vector<vector<char>> &a, int x, int y, vector<vector<int>> &vis){
    vis[x][y] = 1;

    static vector<int> dx = {-1, 0, 1, 0};
    static vector<int> dy = {0, 1, 0, -1};

    for(int i = 0;i<dy.size();i++){
        int ty = y+dy[i];
        int tx = x+dx[i];

        if(0<=tx && tx<a.size() && 0<=ty && ty<a[tx].size() && a[tx][ty]=='#' && !vis[tx][ty]){
            dfs(a, tx, ty, vis);
        }
    }
}

void solve(){
    cin>>n>>m;
    vector<vector<int>>vis(n, vector<int>(m));
    vector<vector<char>>v(n);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            char ch;cin>>ch;
            v[i].push_back(ch);
        }
    }
    int cnt = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(v[i][j]=='#' && !vis[i][j]){
                cnt++;
                dfs(v, i, j, vis);
            }
        }
    }
    cout<<cnt;
}

int main(){
    go
    solve();
}