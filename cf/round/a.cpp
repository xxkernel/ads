#include<bits/stdc++.h>
using namespace std;

void solve(){
    int m;cin>>m;
    vector<int>v;
    for(int i = 0;i<2*m;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    long long sum = 0;
    sort(v.begin(), v.end());
    for(int i = 0;i<2*m;i+=2){
        sum+=(min(v[i], v[i+1]));
    }
    cout<<sum<<endl;
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}