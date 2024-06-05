#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    int ans = 0;
    int cnt = 0;
    for(int i = 0;i<n;i++){
        int x;cin>>x;
        if(x==0){
            cnt++;
        }
        else{
            ans = max(cnt, ans);
            cnt = 0;
        }
    }
    cout<<ans<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}