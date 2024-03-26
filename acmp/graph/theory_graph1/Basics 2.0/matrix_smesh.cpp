#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n, cnt = 0;
    cin>>n;
    vector<vector<int>>v(n);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            int num;cin>>num;
            if(num==1){
                cnt++;
            }
            v[i].push_back(num);
        }
    }
    cout<<n<<" "<<cnt<<endl;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(v[i][j]==1){
                cout<<i+1<<' '<<j+1<<endl;
            }
        }
    }
}

int main(){
    go
    solve();
}