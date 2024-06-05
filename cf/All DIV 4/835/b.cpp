#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    int mx = INT_MIN;
    for(int i = 0;i<n;i++){
        char a;cin>>a;
        mx = max(int(a-'a')+1, mx);
    }
    cout<<mx<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}