#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    string s, t;
    cin>>s>>t;
    int j = 0;
    for(int i = 0;i<t.size();i++){
        if(j!=s.size() && t[i]==s[j]){
            j++;
        }
    }
    if(s.size()==j){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}

int main(){
    go
    solve();
}