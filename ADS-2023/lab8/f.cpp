#include<unordered_map>
#include<map>
#include<iostream>
using namespace std;

int main(){
    string s;cin>>s;
    unordered_map<long long,bool>mp;
    for(int i = 0;i<s.size();i++){
        long long h = 1;
        long long q = 1e15 + 7;
        long long p = 31;
        long long s_1 = 0;
        for(int j = i;j<s.size();j++){
            long long curr_s_1 = ((s[j]-96)*h)%q;
            s_1 = (s_1+curr_s_1)%q;
            h = (h*p)%q;
            if(!mp[s_1]){
                mp[s_1] = 1;
            }
        }
    }
    cout<<mp.size();
}