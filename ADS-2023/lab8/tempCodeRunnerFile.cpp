#include<iostream>
#include<vector>
#include<map>
using namespace std;

void rb(string s, string text, map<int, int>&mp){
    int n = s.size();
    int m = text.size();
    long long s_1 = 0;
    long long text_1 = 0;
    int q = 128;
    long long h = 1;
    int p = 11;
    for(int i = 0;i<m;i++){
        h = (h*p)%q;
    }
    for(int i = 0;i<m;i++){
        s_1 = (s_1*p+s[i])%q;
        text_1 = (text_1*p+text[i])%q;
    }
    for(int i = 0;i<=n-m;i++){
        if(text_1==s_1){
            bool isTrue = true;
            for(int j = 0;j<m;j++){
                if(s[i+j]!=text[j]){
                    isTrue = false;
                    break;
                }
            }
            if(isTrue){
                mp[i]++;
            }
        }
        if(i<n-m){
            s_1 = (p*(s_1-s[i]*h)+s[i+m])%q;
            if(s_1<0){
                s_1+=q;
            }
        }
    }
}

int main(){
    string s1, s2, text;
    cin>>s1>>s2>>text;
    map<int,int>mp;
    rb(s1, text, mp);
    rb(s2, text, mp);
    int cnt = 0;
    for(auto x:mp){
        if(x.second==2){
            cnt++;
        }
    }
    cout<<cnt;
}