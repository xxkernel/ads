#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n = 8;
    char v[n][n];
    for(int i = 0;i<8;i++){
        for(int j = 0;j<8;j++){
            cin>>v[i][j];
        }
    }
    for(int i = 0;i<8;i++){
        for(int j = 0;j<n;j++){
            if(v[i][j]=='#' && v[i-1][j-1]=='#' && v[i-1][j+1]=='#' && v[i+1][j-1]=='#' && v[i+1][j+1]=='#'){
                cout<<i+1<<" "<<j+1<<endl;
                return;
            }
        }
    }
    cout<<-1<<" "<<-1<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}