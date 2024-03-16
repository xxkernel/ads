#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;cin>>n;
    vector<string>v;
    for(int i = 0;i<n;i++){
        string s;cin>>s;
        v.push_back(s);
    }
    map<char,int>mp;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(v[i][j]=='1'){
                mp[i]++;
            }
        }
    }
    if(mp.size()==1){
        cout<<"SQUARE"<<endl;
    }
    else{
        int temp = 0;
        for(auto x:mp){
            if(temp==0){
                temp = x.second;
            }
            else{
                if(temp==x.second){
                    cout<<"SQUARE"<<endl;
                    return;
                }else{
                    cout<<"TRIANGLE"<<endl;
                    return;
                }
            }
        }
    }

}
int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}