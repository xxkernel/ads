#include<bits/stdc++.h>
using namespace std;

long long p = 31;
long long q = 1e9;

long long getHash(string s){
    long long h = 0;
    long long curX = 1;
    for(int i = 0;i<s.size();i++){
        long long curHash = ((s[i]-'a'+1)*curX)%q;
        h = (h+curHash)%q;
        curX = (curX*p)%q;
    }
    return h;
}

vector<long long> getPrefix(string s){
    vector<long long>hashes(s.size());
    long long curX = 1;
    for(int i = 0;i<s.size();i++){
        hashes[i] = (s[i]-'a'+1)*curX%q;
        if(i>0){
            hashes[i] = (hashes[i-1]+hashes[i])%q;
        }
        curX = (curX*p)%q;
    }
    return hashes;
}

int rabin_karp(string s, string t){
    long long pod = getHash(t);
    int cnt = 0;
    vector<long long>hashes = getPrefix(s);
    for(int i = 0;i<s.size()-t.size()+1;i++){ 
        long long dif = hashes[i+t.size()-1]; //2
        if(i){
            dif-=hashes[i-1];
            pod = (pod*p)%q;
        }
        if(dif==pod){
            cnt++;
        }
    }
    return cnt;
}



int main(){
    string s ="hello";
    vector<long long>v(s.size());
    string t = "el";

}