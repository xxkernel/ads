#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }return gcd(b, a%b);
}

int cnt_d(int n){
    if(n==1){
        return 0;
    }
    int cnt = 1;
    int i = 2;
    while(i*i<=n){
        if(n%i==0){
            cnt++;
            n/=i;
        }
        else{
            i++;
        }
    }
    return cnt;
}

void solve(){
    int n, m;
    cin>>n>>m;
    int cnt = 0;
    int temp = gcd(n, m);
    cout<<cnt_d(n/temp)+cnt_d(m/temp);
}

int main(){
    go
    solve();
}