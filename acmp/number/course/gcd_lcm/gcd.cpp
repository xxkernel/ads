#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int gcd(int n, int m){
    if(m==0){
        return n;
    }return gcd(m, n%m);
}

int main(){
    go
    int n,m;
    cin>>n>>m;
    cout<<gcd(n,m);
}