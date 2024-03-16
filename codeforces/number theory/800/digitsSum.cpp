#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    if(n<9){
        cout<<0<<endl;
        return;
    }
    cout<<(n+1)/10<<endl;
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}