#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    if(n==1){
        cout<<-1<<endl;
    }else{
        cout<<n-1<<endl;
    }
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}