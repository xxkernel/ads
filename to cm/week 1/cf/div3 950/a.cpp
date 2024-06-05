#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n, m;cin>>n>>m; 
    map<char,int>mp;
    mp['A'] = mp['D'] = mp['E'] = mp['F'] = mp['G'] = 1;
    mp['B'] = 1;
    mp['C'] = 1;
    for(int i = 0;i<n;i++){
        char a;cin>>a;
        mp[a]++;
    }
    int ans = 0;
    for(auto x:mp){
        if(x.second-1>=m){
            continue;
        }else{
            ans = ans+(m-x.second+1);
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