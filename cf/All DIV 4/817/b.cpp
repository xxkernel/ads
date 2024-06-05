#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    string s, t;
    cin>>s>>t;
    for(int i = 0;i<n;i++){
        if(s[i]==t[i] || (s[i]=='G' && t[i]=='B') || (s[i]=='B' && t[i]=='G')){
            continue;
        }else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}