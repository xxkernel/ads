#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n;
int cnt = 0;

void solve(){
    cin>>n;
    vector<vector<int>>v(n, vector<int>(n));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>v[i][j];
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(v[i][j]){
                v[i][j] = v[j][i] = 0;
                cnt++;
            }
        }
    }

    cout<<cnt;
}

int main(){
    go
    solve();
}