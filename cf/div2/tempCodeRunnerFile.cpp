#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;
    if((n%2!=0 && m%2!=0) || (n%2!=0 && m/2==n) || (m%2!=0 && n/2==m) || (n==1 && m!=1) || (m==1 && n!=1)){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}