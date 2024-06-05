#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n = 8;
    vector<vector<char>>v(n, vector<char>(n));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>v[i][j];
        }
    }
    string s = "";
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(v[i][j]!='.'){
                s+=v[i][j];
            }
        }
    }
    cout<<s<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}