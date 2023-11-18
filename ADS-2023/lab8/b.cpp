// #include<iostream>
// #include<vector>
// #include<map>
// #include<unordered_map>
// using namespace std;

// int cnt = 0;
// void rb(string s, string text, unordered_map<int, int>&mp){
//     int n = s.size();
//     int m = text.size();
//     long long s_1 = 0;
//     long long text_1 = 0;
//     long long q = 1e15 + 7;
//     long long h = 1;
//     long long p = 31;
//     for(int i = 0;i<m-1;i++){
//         h = (h*p)%q;  
//     }
//     for(int i = 0;i<m;i++){
//         s_1 = (s_1*p+s[i])%q;           
//         text_1 = (text_1*p+text[i])%q;  
//     }
//     for(int i = 0;i<=n-m;i++){
//         if(text_1==s_1){
//             bool isTrue = true;
//             for(int j = 0;j<m;j++){
//                 if(s[i+j]!=text[j]){
//                     isTrue = false;
//                     break;
//                 }
//             }
//             if(isTrue){
//                 mp[i]++;
//             }
//         }
//         if(i<n-m){
//             s_1 = (p*(s_1-s[i]*h)+s[i+m])%q; 
//             if(s_1<0){
//                 s_1+=q;
//             }
//         }
//     }
// }

// int main(){
//     string s1, s2, text;
//     cin>>s1>>s2>>text;     
//     unordered_map<int, int>mp;
//     if(s2.size()>s1.size()){
//         cout<<0;
//         return 0;
//     }
//     rb(s1, text, mp);
//     rb(s2, text, mp);
//     int cnt = 0;
//     for(auto x:mp){
//         if(x.second==2){
//             cnt++;
//         }
//     }
//     cout<<cnt;
// }




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
    string s1, s2, t;
    cin>>s1>>s2>>t;
    vector<int>v1 = rabin_karp(s1, t);
    int cnt = 0;
    vector<int>v2 = rabin_karp(s2, t);
    unordered_map<int,int>mp;
    for(auto x:v1){
        mp[x]++;
    }
    for(auto x:v2){
        mp[x]++;
    }
    for(auto x:mp){
        if(x.second==2){
            cnt++;
        }
    }
    cout<<cnt;
}