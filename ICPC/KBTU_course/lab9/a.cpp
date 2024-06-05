#include<iostream>
#include<vector>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

}

int main(){
    go
    freopen("floyd.in", "r", stdin);
    freopen("floyd.out", "w", stdout);
    int n;cin>>n;
    vector<vector<int>>v(n, vector<int>(n));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>v[i][j];
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            for(int k = 0;k<n;k++){
                v[j][k] = min(v[j][k], v[j][i] + v[i][k]);
            }
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}