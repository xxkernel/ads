#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    ll n, x, y;
    cin>>n>>x>>y;
    while(x!=y){
        if(x>y){
            x/=2;
            x = floor(x);
        }
        else{
            y/=2;
            y = floor(y);
        }
    }
    cout<<x;
}

int main(){
    go
    solve();
}