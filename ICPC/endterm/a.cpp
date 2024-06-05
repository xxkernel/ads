#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

// const int mxN = 1e5;
// int dp[mxN];
bool isTrue = 0;

void solve(){
    ll n, ans = 0, twoway = 0, oneway = 0, noway = 0;
    cin>>n;
    for(int i = 0; i < n; ++i) {
        int x, y; cin >> x >> y;
        if(x % 2 == 1 && y % 2 == 1) {
            twoway++;
        }
        else if(x % 2 == 1 || y % 2 == 1) {
            isTrue = 1;
            oneway++;
        }
        else{
            noway++;
        }
    }
    if(isTrue) {
        twoway+=oneway-1;
    }else if(twoway%2==0){
        cout<<0;
        return;
    }
    ans+=pow(2, twoway);
    ans*=pow(2, noway);
    cout<<ans;
}

int main(){
    go
    solve();
}