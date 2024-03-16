#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }return gcd(b, a%b);
}

int main(){
    go
    int n, m;
    cin>>n>>m;
    for(int i = 0;i<gcd(n, m);i++){
        cout<<1;
    }
}