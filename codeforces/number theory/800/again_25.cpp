#include<bits/stdc++.h>
using namespace std;

int binpow(int a, int b){
    if(b==0){
        return 1;
    }
    int res = binpow(a, b/2);
    if(b&1){
        return res*res*a%100;
    }return res*res%100;
}

int main(){
    int n;cin>>n;
    cout<<binpow(5, n);
}