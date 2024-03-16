#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int dp[100001];

void solve(){
    int n;cin>>n;
    int cnt = 0;
    while(n){
        if(n>=100){
            cnt+=(n/100);
            n = n%100;
        }
        else if(n>=20){
            cnt+=(n/20);
            n = n%20;
        }
        else if(n>=10){
            cnt+=(n/10);
            n = n%10;
        }
        else if(n>=5){
            cnt+=(n/5);
            n = n%5;
        }
        else{
            cnt+=(n/1);
            break;
        }
    }
    cout<<cnt;
}

int main(){
    go
    solve();
}