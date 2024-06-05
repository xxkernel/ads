#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    int odd = 0, even = 0;
    while(n--){
        int x;cin>>x;
        if(x%2==0){
            even+=x;
        }else{
            odd+=x;
        }
    }
    if(even>odd){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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