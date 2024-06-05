#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    int cnt = 0;
    int sum = 0;
    while(n){
        if(cnt!=3){
            cnt++;
            sum+=n%10;
            n/=10;
        }else{
            sum-=n%10;
            n/=10;
        }
    }
    if(sum==0){
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