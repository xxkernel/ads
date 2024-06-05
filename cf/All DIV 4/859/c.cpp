#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    map<char,int>mp;
    bool isTrue = 1;
    for(int i = 0;i<n;i++){
        char a;cin>>a;
        if(i==0){
            mp[a]=i+1;
            continue;
        }
        if(!mp[a]){
            mp[a] = i+1;
        }else{
            if((mp[a]-1)%2==i%2){
                continue;
            }else{
                isTrue = 0;
            }
        }
    }
    isTrue ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}