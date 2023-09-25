#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin>>s1>>s2;
    vector<char>v1;
    vector<char>v2;
    for(int i = 0;i<s1.size();i++){
        if(s1[i]!='#'){
            v1.push_back(s1[i]);
        }
        else{
            v1.pop_back();
        }
    }
    for(int i = 0;i<s2.size();i++){
        if(s2[i]!='#'){
            v2.push_back(s2[i]);
        }
        else{
            v2.pop_back();
        }
    }
    string s_1, s_2;
    for(int i = 0;i<v1.size();i++){
        s_1+=v1[i];
    }
    for(int i = 0;i<v2.size();i++){
        s_2+=v2[i];
    }
    s_1==s_2 ? cout<<"Yes" : cout<<"No";
}