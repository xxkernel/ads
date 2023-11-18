#include<bits/stdc++.h>
using namespace std;

long long q = 1e9 + 7;
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

vector<int> rabin_karp(string s,string t){
    long long p_path = getHash(t);
    vector<int>v;
    vector<long long>hashes = getPrefixHash(s);
    for(int i = 0;i<s.size()-t.size()+1;i++){
        long long dif = hashes[i+t.size()-1];
        if(i){
            dif-=hashes[i-1];
            p_path=(p_path*p)%q;
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
    while(true){
        int num;cin>>num;
        if(num==0){
            return 0;
        }
        vector<string>v;
        map<string,int>count;
        for(int i = 0;i<num;i++){
            string t;cin>>t;
            v.push_back(t);
            count[t]++;
        }
        string s;cin>>s;
        map<string,int>mp;
        int mx = 0;
        for(auto x:v){
            mp[x] = rabin_karp(s,x).size();
            mx = max(mp[x], mx);
        }
        cout<<mx<<endl;
        for(auto x:mp){
            if(x.second==mx){
                for(int i = 0;i<count[x.first];i++){
                    cout<<x.first<<endl;
                }
            }
        }
    }
}