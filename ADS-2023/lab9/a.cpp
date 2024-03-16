#include<bits/stdc++.h>
using namespace std;

vector<long long> lps_prefix(string s){
    int n = s.size();
    vector<long long>v(n, 0);
    for(int i = 1;i<n;i++){
        long long j = v[i-1];
        if(j>0 && s[i]!=s[j]){
            j = v[j-1];
        }
        if(s[i]==s[j]){
            j++;
        }
        v[i] = j;
    }
    return v;
}

bool kmp(string s,string text){
    int i = 0, j = 0;
    vector<long long>v = lps_prefix(s);
    while(i<s.size() && j<text.size()){
        if(text[j]==s[i]){
            i++;
            j++;
            if(j==text.size()){
                return true;
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
    return false;
}

int main(){
    string a, b;
    cin>>a>>b;
    string temp = a;
    int cnt = 1;
    while(temp.size()<b.size()){
        temp+=a;
        cnt++;
    }
    if(temp==b){
        cout<<cnt;
        return 0;
    }
    if(kmp(temp, b)){
        cout<<cnt;
        return 0;
    }
    if(kmp(temp+a, b)){
        cout<<cnt+1;
        return 0;
    }
    else{
        cout<<-1;
    }
}