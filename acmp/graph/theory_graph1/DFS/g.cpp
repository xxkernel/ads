#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

bool e(int i, int j, vector<string>&v){
    return i>=0&&j>=0&&i<8&&j<8&&v[i][j]!='#';
}

void dfs(char a, vector<string>&v, int &cnt, int i, int j){
    char ch = v[i][j];
    v[i][j] = '#';
    cnt++;
    if(e(i+1, j, v) && ch==v[i+1][j]){
        dfs(v[i+1][j], v, cnt, i+1, j);
    }
    if(e(i-1, j, v) && ch==v[i-1][j]){
        dfs(v[i-1][j], v, cnt, i-1, j);
    }
    if(e(i, j+1, v) && ch==v[i][j+1]){
        dfs(v[i][j+1], v, cnt, i, j+1);
    }
    if(e(i, j-1, v) && ch==v[i][j-1]){
        dfs(v[i][j-1], v, cnt, i, j-1);
    }
}

void solve(){
    vector<string>v(8);
    for(int i = 0;i<8;i++){
        cin>>v[i];
    }
    int cnt = 0;
    for(int i = 0;i<8;i++){
        for(int j = 0;j<8;j++){
            if(e(i, j, v)){
                int cnt_1 = 0;
                dfs(v[i][j], v, cnt_1, i, j);
                cnt = max(cnt_1, cnt);
            }
        }
    }
    cout<<cnt;
}

int main(){
    go
    solve();
}