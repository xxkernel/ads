#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    vector<vector<int>>v(n, vector<int>(n, 0));
    int m = n;
    for(int i = 0;i<n;i++){
        int x;cin>>x;
        while(x--){
            int num;cin>>num;
            num--;
            v[i][num] = 1;
        }
    }
    cout<<n<<endl;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
}

int main(){
    go
    solve();
}