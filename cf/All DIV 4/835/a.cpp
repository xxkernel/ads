#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int a, b, c;
    cin>>a>>b>>c;
    int mx = max(a, max(b, c));
    int mn = min(a, min(b, c));
    if(a!=mx && a!=mn){
        cout<<a<<endl;
    }else if(b!=mx && b!=mn){
        cout<<b<<endl;
    }else{
        cout<<c<<endl;
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