#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

const int MAX = 50001;

int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

void solve(){
    int m;
    ll dp[MAX];
    vector<int>v(MAX);
    dp[1] = 0;
    for(int i = 2;i<MAX;i++){
        dp[i] = phi(i);
    }
    v[1] = 1;
    for(int i = 2;i<MAX;i++){
        v[i] = v[i-1]+2*dp[i];
    }
    while(true){
        cin>>m;
        if(m==0){
            break;
        }
        cout<<v[m]<<endl;
    }
}

int main(){
    go
    solve();
}