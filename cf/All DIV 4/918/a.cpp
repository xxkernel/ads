#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b){
        cout<<c<<endl;
    }
    else if(b==c){
        cout<<a<<endl;
    }
    else{
        cout<<b<<endl;
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