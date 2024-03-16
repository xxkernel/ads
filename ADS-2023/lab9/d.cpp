#include<bits/stdc++.h>
using namespace std;

vector<int> prefix_function (string s) {
    int n = s.size();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j - 1];
        if (s[i] == s[j]) j++;
        pi[i] = j;
    }
    return pi;
}

int main(){
    string s;cin>>s;
    int n;cin>>n;
    map<int, vector<string>>mp;
    while(n--){
        string t;cin>>t;
        t[0] = tolower(t[0]);
        string temp = t+s;
        vector<int>v = prefix_function(temp);
        t[0] = toupper(t[0]);
        mp[v.back()].push_back(t);
    }
    int mx = 0;
    for(auto x:mp){
        if(x.first>mx){
            mx = x.first;
        }
    }
    if(mx==0){
        cout<<0;
        return 0;
    }
    cout<<mp[mx].size()<<endl;
    for(auto x:mp[mx]){
        cout<<x<<endl;
    }
}