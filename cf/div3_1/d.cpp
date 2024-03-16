#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x, y;
    cin>>n>>x>>y;
    vector<int>v;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    int cnt = 0;
    for(int i = 0;i<v.size();i++){
        for(int j = i+1;j<v.size();j++){
            if((v[i]+v[j])%x==0 && abs(v[i]-v[j])%y==0){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}