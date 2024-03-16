#include<bits/stdc++.h>
using namespace std;

void solve(){
    int m;cin>>m;
    if(m<=3){
        for(int i = 1;i<=m;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    vector<int>v;
    int l = 1;
    int r = m;
    while(l<=r){
        v.push_back(r);
        r--;
        if(l<=r){
            v.push_back(l);
            l++;
        }
    }
    for(auto x:v){
        cout<<x<<" ";
    }cout<<endl;
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}