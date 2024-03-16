#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }return gcd(b, a%b);
}

void solve(){
    int n;cin>>n;
    if(n%2==0){
        cout<<n/2<<endl;
        return;
    }
    cout<<(n-1)/2<<endl;
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}