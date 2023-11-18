#include<bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;

long long toHash(string s){
    long long hashes = 0;
    long long p = 1;
    for(int i = 0;i<s.size();i++){
        hashes = (hashes+(s[i]-47)*p)%mod;
        p = (p*11)%mod;
    }
    return hashes;
}

int main(){
    int n;cin>>n;
    int cnt = 0;
    vector<string>v;
    map<string, bool>check;
    map<string, long long>mp;
    for(int i = 0;i<2*n;i++){
        string s;cin>>s;
        check[s] = 1;
        mp[s] = toHash(s);
        v.push_back(s);
    }
    for(auto x:v){
        if(cnt==n){
            return 0;
        }
        else if(check[to_string(mp[x])]==1){
            cout << "Hash of string "<<"\"" << x <<"\"" << " is " << mp[x] << endl;
            cnt++;
        }
    }
}