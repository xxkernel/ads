#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m;
const int mxN = 1e5;
vector<char>v[mxN];
int vis[mxN];

void solve(){
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            char a;
            cin>>a;
            v[i].push_back(a);
        }
    }
}

int main(){
    go
    solve();
}