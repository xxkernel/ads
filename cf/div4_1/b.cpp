#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    vector<vector<char>>v(n+n, vector<char>(n+n));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i%2==0){
                if(j%2==0){
                    v[2*i][2*j] = v[2*i+1][2*j+1] = v[2*i][2*j+1] = v[2*i+1][2*j] =  '#';
                }
                else{
                    v[2*i][2*j] = v[2*i+1][2*j+1] = v[2*i][2*j+1] = v[2*i+1][2*j] = '.';
                }
            }
            else{
                if(j%2==1){
                    v[2*i][2*j] = v[2*i+1][2*j+1] = v[2*i][2*j+1] = v[2*i+1][2*j] =  '#';
                }
                else{
                    v[2*i][2*j] = v[2*i+1][2*j+1] = v[2*i][2*j+1] = v[2*i+1][2*j] = '.';
                }
            }
        }
    }
    for(int i = 0;i<n+n;i++){
        for(int j = 0;j<n+n;j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}