#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    map<int,int>mp;
    int cnt = 0, ans = 0;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        if(!mp[num]){
            mp[num]++;
            ans++;
        }else{
            cnt++;
        }
    }
    if(cnt%2==1){
        ans--;
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