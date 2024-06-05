#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;
    if(k>1 && n!=k){
        cout<<-1<<endl;
    }else{
        if(n==k){
            for(int i = 0;i<n;i++){
                cout<<1<<" ";
            }cout<<endl;
        }else{
            for(int i = 0;i<n-1;i++){
                cout<<1<<" ";
            }
        cout<<2<<endl;
        }
    }
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}