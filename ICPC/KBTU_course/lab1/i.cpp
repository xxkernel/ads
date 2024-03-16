#include<bits/stdc++.h>
using namespace std;

long long MOD = 10e18;

long long binpow(int a, int b){
    if(b==0){
        return 1;
    }
    a%=MOD;
    long long temp = binpow(a, b/2);
    if(b%2==1){
        return temp*temp*a%MOD;
    }
    return temp*temp%MOD;
}

int main(){
    int x, n;
    cin>>x>>n;
    cout<<binpow(x, n);
}