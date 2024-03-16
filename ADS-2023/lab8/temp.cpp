#include<bits/stdc++.h>
using namespace std;

long long q = 1e9+7;
long long p = 31;

long long getHash(string s){
    long long curX = 1;
    long long h = 0;
    for(int i = 0;i<s.size();i++){
        long long curHash = (s[i]-'a'+1)*curX%q;
        h = (h+curHash)%q;
        curX = (curX*p)%q;
    }
    return h;
}

vector<long long>getPrefix(string s){
    vector<long long>hashes(s.size());
    long long curX = 0;
    for(int i = 0;i<s.size();i++){
        hashes[i] = (s[i]-'a'+1)*curX%q;
        if(i){
            hashes[i] = (hashes[i-1]+hashes[i])%q;
        }
        curX = (curX*p)%q;
    }
    return hashes;
}

vector<int>rabin_karp(string s, string t){
    long long p_path = getHash(t);
    vector<long long>hashes = getPrefix(s);
    vector<int>v;
    for(int i = 0;i<s.size()-t.size()+1;i++){
        long long dif = hashes[i+t.size()-1];
        if(i){
            dif-=hashes[i-1];
            p_path = (p_path*p)%q;
        }
        if(dif<0){
            dif+=q;
        }
        if(dif==p_path){
            v.push_back(i);
        }
    }
    return v;
}
int main(){
    string s ="hello";
    cout<<getHash(s);
}