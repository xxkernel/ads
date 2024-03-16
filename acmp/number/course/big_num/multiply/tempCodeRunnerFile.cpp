#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

unsigned int binpow(int a, int n){
    if(n==0){
        return 1;
    }
    unsigned int temp = binpow(a, n/2);
    if(n%2==1){
        return temp*temp*a;
    }
    return temp*temp;
}

void solve(){
    int n;cin>>n;
    cout<<pow(2,n);
}

int main(){
    go
    solve();
}