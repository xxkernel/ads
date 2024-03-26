#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    ll n;cin>>n;
    cout<<n;
    while(n>1){
        if(n%2==0){
            n/=2;
        }
        else{
            n = n*3+1;
        }
        cout<<" "<<n;
    }
}

int main(){
    go
    solve();
}