#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int x = 0, y = 0;
    for(int i = 0;i<n;i++){
        if(x==1 && y==1){
            cout<<"YES"<<endl;
            return;
        } 
        if(s[i]=='U'){
            x++;
        }
        if(s[i]=='D'){
            x--;
        }
        if(s[i]=='R'){
            y++;
        }
        if(s[i]=='L'){
            y--;
        }
    }
            if(x==1 && y==1){
            cout<<"YES"<<endl;
            return;
        } 
    cout<<"NO"<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}