#include<bits/stdc++.h>
using namespace std;

long long q = 1e9 + 7;
long long p = 31;

long long getHash(string s){
    long long h = 0;
    long long curX = 1;
    for(int i = 0;i<s.size();i++){
        long long curHash = (s[i]-'a'+1)*curX%q;
        h = (h+curHash)%q;
        curX = (curX*p)%q;
    }
    return h;
}

vector<long long> getPrefixHash(string s){
    vector<long long>hashes(s.size());
    long long curX = 1;
    for(int i = 0;i<s.size();i++){
        hashes[i] = (s[i]-'a'+1)*curX%q;
        if(i){
            hashes[i] = (hashes[i]+hashes[i-1])%q;
        }
        curX = (curX*p)%q;
    }
    return hashes;
}

void Rabin_karp(string s, string t, vector<bool>&check){
    long long p_hash = getHash(t);
    vector<long long> hashes = getPrefixHash(s);
    for(int i = 0;i<s.size()-t.size()+1;i++){
        long long dif = hashes[i+t.size()-1];
        if(i){
            dif-=hashes[i-1];
            p_hash=(p_hash*p)%q;
        }
        if(dif<0){
            dif+=q;
        }
        if(dif==p_hash){
            for(int j = i;j<i+t.size();j++){
                check[j] = 1;
            }
        }
    }
}

int main(){
    string s;cin>>s;
    int n;cin>>n;
    vector<bool>check(s.size(), 0);
    for(int i = 0;i<n;i++){
        string t;cin>>t;
        Rabin_karp(s,t,check);
    }
    for(auto x:check){
        if(!x){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}