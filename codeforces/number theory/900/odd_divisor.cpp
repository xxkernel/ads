#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    if(n%2==1 && n%3==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}