#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    vector<vector<int>>v(n);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            int num;cin>>num;
            v[i].push_back(num);
        }
    }
    bool isTrue = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i][i] != 0) {
            cout<<"NO";
            return;
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(v[i][j]==1 && !v[j][i]){
                isTrue = 1;
            }
        }
    }
    isTrue==0 ? cout<<"NO":cout<<"YES";
}

int main(){
    go
    solve();
}