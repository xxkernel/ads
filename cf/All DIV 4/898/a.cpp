#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    string s;cin>>s;
    if(s[0]=='a' && (s[1]=='b' || s[1]=='c') && (s[2]=='c' || s[2]=='b')){
        cout<<"YES"<<endl;
    }else if((s[0]=='a' || s[0]=='c') && (s[1]=='b') && (s[2]=='a' || s[2]=='a')){
        cout<<"YES"<<endl;
    }else if((s[0]=='a' || s[0]=='b') && (s[1]=='a' || s[1]=='b') && s[2]=='c'){
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