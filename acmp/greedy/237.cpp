#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    string s = "";
    for(int i = 0;i<n;i++){
        string t;cin>>t;
        s+=t;
    }
    string words = "";
    for(int i = 0; i < m; ++i) {
        string t;
        cin>>t;
        words+=t;
    }
    for(int i = 0; i < words.size(); ++i) {
        int pos = s.find(words[i]);
        s.erase(pos, 1);
    }
    sort(s.begin(), s.end());
    cout<<s;
}

int main(){
    go
    solve();
}