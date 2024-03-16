#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    map<int,int>mp;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        mp[num]++;
    }
    if(mp[2]%2==0 && mp[1]%2==0){
        cout<<"YES"<<endl;
    }else if(mp[2]%2==1 && ((mp[1]-2)%2==0 && mp[1]!=0)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}