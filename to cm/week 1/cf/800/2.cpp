#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>v(n+1, 1);
    v[0] = v[1] = 0;
    for(int i = 2;i*i<=n;i++){
        if(v[i]){
            for(int j = i*i;j<=n;j+=i){
                v[j] = 0;
            }
        }
    }
    int x = 4;
    while(true){
        if(!v[x] && !v[n-x]){
            cout<<x<<" "<<n-x<<endl;
            return;
        }
        x++;
    }
}

int main(){
    go
    solve();
}