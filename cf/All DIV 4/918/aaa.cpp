#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int r, l;
    cin>>r>>l;
    int cnt = 0;
    int res = 1;
    while(res*2<=l){
        res*=2;
        cnt++;
    }
    cout<<cnt<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}