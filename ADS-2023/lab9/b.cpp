#include<bits/stdc++.h>
using namespace std;

vector<long long> lps_prefix(string s){
    vector<long long> v(s.size(), 0);
    for(int i = 1;i<s.size();i++){
        long long j = v[i-1];
        if(j>0 && s[i]!=s[j]){
            j = v[i-1];
        }
        else if(s[i]==s[j]){
            j++;
        }
        v[i] = j;
    }
    return v;
}

int kmp(string s, string t){
    vector<long long> v = lps_prefix(s);
    int cnt = 0;
    int i = 0;
    int j = 0;
    while(i<s.size() && j<t.size()){
        if(s[i]==t[j]){
            j++;
            i++;
            if(j==t.size()){
                cnt++;
                j = v[j-1];
            }
        }
        else{
            if(j!=0){
                j = v[j-1];
            }
            else{
                i++;
            }
        }
    }
    return cnt;
}

int main(){
    string a, b;
    int k;
    cin>>a>>k>>b;
    (kmp(b, a)>=k) ? cout<<"YES" : cout<<"NO";
}