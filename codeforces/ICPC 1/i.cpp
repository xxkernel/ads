#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    while(n--){
        int sz,k;
        cin>>sz>>k;
        vector<char>v;
        map<char,bool>mp;
        for(int i = 0;i<26;i++){
            mp[i] = 0;
        }
        for(int i = 0;i<sz;i++){
            char a;cin>>a;
            v.push_back(a);
        }
        for(int i = 0;i<sz;i++){
            int temp = v[i]-'a';
            while(temp && (mp[temp]||k)){
                if(mp[temp]){
                    temp--;
                }
                else{
                    k--;
                    mp[temp] = 1;
                    temp--;
                }
            }
            v[i] = char('a'+temp);
        }
        for(auto x:v){
            cout<<x;
        }
        cout<<endl;
    }
}