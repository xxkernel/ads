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
    for(int i = 0;i<n;i++){
        int x;cin>>x;
        while(x--){
            char a;cin>>a;
            if(a=='D'){
                v[i] = (v[i]+1)%10;
            }else{
                if(v[i]==0){
                    v[i] = 9;
                }else{
                    v[i]--;
                }
            }
        }
    }
    for(auto x:v){
        cout<<x<<" ";
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