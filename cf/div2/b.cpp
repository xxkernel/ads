#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>v;
    while(n--){
        int num;cin>>num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    vector<int>vis(n, 0);
    int temp = 1;
    for(int i = v.size()-1;i>0;i--){
        if(v[i]-v[i-1]<=n && vis[v[i]-v[i-1]]){
            vis[v[i]-v[i-1]] = 1;
            vis[temp] = 1;
            temp++;
            v[i] = v[i]+temp;
            v[i-1] = v[i-1]+n-temp;
        }
    }
    map<int,int>mp;
    for(auto x:v){
        mp[x]++;
    }
    int mx = 0;
    for(auto x:mp){
        mx = max(x.second, mx);
    }
    cout<<mx<<endl;

}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}