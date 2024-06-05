#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n = 3;
    char ans;
    for(int i = 0;i<n;i++){
        map<int,int>mp;
        bool isTrue = 0;
        for(int j = 0;j<n;j++){
            char a;cin>>a;
            if(a=='?'){
                isTrue = 1;
            }
            mp[a]++;
        }
        if(isTrue){
            if(!mp['A']){
                ans = 'A';
            }else if(!mp['B']){
                ans = 'B';
            }else{
                ans = 'C';
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}