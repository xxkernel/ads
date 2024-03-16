#include <bits/stdc++.h>
using namespace std;

unsigned long long mult(unsigned long long a,unsigned long long b,unsigned long long mod){
    unsigned long long res = 0;
    while(b>0)
    {
        if(b&1){
            res = (res + a)%mod;
        }
        a = (a + a)%mod;
        b>>=1;
    }
    return res;
}

unsigned long long binpow(unsigned long long a,unsigned long long b,unsigned long long mod){
    unsigned long long res = 1;
    while(b>0)
    {
        if(b&1){
            res=mult(res, a, mod);
        }
        a=mult(a, a, mod);
        b>>=1;
    }
    return res;
}

int main(){
    unsigned long long a,b,c;
    while(cin>>a>>b>>c){
        cout<<binpow(a, b, c)<<endl;
    }
}