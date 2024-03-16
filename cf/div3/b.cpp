#include<bits/stdc++.h>
using namespace std;

void solve(){
    int m;cin>>m;
    vector<int>v;
    map<int,deque<char>>mp;
    for(int i = 0;i<m;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    int temp = 0;
    int cnt = 1;
    string s = "";
    for(int i = 0;i<m;i++){
        if(v[i]==0){
            s+=char(temp+97);
            mp[cnt].push_back(char(temp+97));
            temp++;
        }
        else{
            s = s+mp[v[i]].front();
            mp[v[i]+1].push_back(mp[v[i]].front());
            if(mp[v[i]].size()>1){
                mp[v[i]].pop_front();
            }
        }
    }
    cout<<s<<endl;
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}