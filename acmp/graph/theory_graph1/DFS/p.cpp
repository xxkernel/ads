#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;

int n, m, x, y;
const int mxN = 1e5;
vector<vector<int>> vis;
vector<vector<int>> ans;
int temp = 1;

void dfs(int i, int j){
    vis[i][j] = 1;
    ans[i][j] = temp++;
    if(i+1<n && j+2<m && !vis[i+1][j+2]){
        dfs(i+1, j+2);
    }
    if(i+2<n && j+1<m && !vis[i+2][j+1]){
        dfs(i+2, j+1);
    }
    if(i+2<n && j-1>=0 && !vis[i+2][j-1]){
        dfs(i+2, j-1);
    }
    if(i+1<n && j-2>=0 && !vis[i+1][j-2]){
        dfs(i+1, j-2);
    }
    if(i-1>=0 && j-2>=0 && !vis[i-1][j-2]){
        dfs(i-1, j-2);
    }
    if(i-2>=0 && j-1>=0 && !vis[i-2][j-1]){
        dfs(i-2, j-1);
    }
    if(i-2>=0 && j+1<m && !vis[i-2][j+1]){
        dfs(i-2, j+1);
    }
    if(i-1>=0 && j+2<m && !vis[i-1][j+2]){
        dfs(i-1, j+2);
    }
}

void solve(){
    cin>>n>>m;
    vis.resize(n, vector<int>(m, 0));
    ans.resize(n, vector<int>(m, 0));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            char a;cin>>a;
            if(a=='K'){
                x = i;
                y = j;
            }
        }
    }
    dfs(x, y);
    int max_width = to_string(temp).size();
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout << setw(max_width) << ans[i][j] << " ";
        }
        cout<<endl;
    }
}

int main(){
    go
    solve();
    return 0;
}
