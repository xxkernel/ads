#include<bits/stdc++.h>
using namespace std;

vector<int> lps(string s){
    vector<int> v(s.size(), 0);
    for(int i = 1; i<s.size();i++){
        int j = v[i-1];
        if(j>0 && s[i]!=s[j]){
            j = v[j-1];
        }
        else{
            j++;
        }
        v[i] = j;
    }
    return v;
}

int kmp(string s, string t){
    vector<int>v = lps(s);
    int i = 0;
    int j = 0;
    int cnt = 0;
    while(i<s.size() && j<t.size()){
        if(s[i]==t[j]){
            i++;
            j++;
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

}