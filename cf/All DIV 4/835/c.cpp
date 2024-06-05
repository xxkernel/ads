#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    vector<int>t = v;
    sort(t.rbegin(), t.rend());
    for(auto x:v){
        if(x==t[0]){
            cout<<x-t[1]<<" ";
        }else{
            cout<<x-t[0]<<" ";
        }
    }cout<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}