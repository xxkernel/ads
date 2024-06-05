#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m;
const int mxN = 1e5;
int sum = 0, curr = 0;
vector<int>v[mxN];

bool e(int x, int y){
    if(x>=0 && x<n && y>=0 && y<m && v[x][y]!=0){
        return 1;
    }return 0;
}

void dfs(int x, int y){
    curr+=v[x][y];
    v[x][y] = 0;
    if(e(x-1, y)){
        dfs(x-1, y);
    }
    if(e(x+1, y)){
        dfs(x+1, y);
    }
    if(e(x, y-1)){
        dfs(x, y-1);
    }
    if(e(x, y+1)){
        dfs(x, y+1);
    }
}

void solve(){
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            int num;cin>>num;
            v[i].push_back(num);
        }
    }
    
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(v[i][j]!=0){
                dfs(i, j);
                sum = max(curr, sum);
                curr = 0;
            }
        }
    }
    cout<<sum<<endl;
    memset(v, 0, sizeof(v));
    sum = 0;
}

int main(){
    go
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
}