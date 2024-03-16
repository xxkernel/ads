#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    char ch;
    cin>>ch;
    vector<int>v(n);
    map<char, int> mp = {{'6', 6}, {'7', 7}, {'8', 8}, {'9', 9}, {'T', 10}, {'J', 11}, {'Q', 12}, {'K', 13},{'A', 14}};
    for(int i = 0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(mp[s[0]])
    }
}

int main(){
    go
    solve();
}