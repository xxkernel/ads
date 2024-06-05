#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;


void solve(){
    int n;cin>>n;
    ll sum = 0;
    for(int i = 0;i<n;i++){
        int x;cin>>x;
        sum+=x;
    }
    ll x = sqrt(sum);
    if(x*x==sum){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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