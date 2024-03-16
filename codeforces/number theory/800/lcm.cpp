#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }return gcd(b, a%b);
}

int lcm(int a, int b){
    return a/gcd(a, b)*b;
}

void solve(){
    int l, r;
    cin>>l>>r;
    if(l<=lcm(l, 2*l) && lcm(l, l*2)<=r){
        cout<<l<<" "<<l*2<<endl;
        return;
    }
    cout<<-1<<" "<<-1<<endl;
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}