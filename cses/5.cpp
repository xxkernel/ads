#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    if(n==1){
        cout<<1;
    }
    else if(n<=3){
        cout<<"NO SOLUTION";
    }else{
        for(int i = 2;i<=n;i+=2){
            cout<<i<<" ";
        }
        for(int i = 1;i<=n;i+=2){
            cout<<i<<' ';
        }
    }
}

int main(){
    go
    solve();
}