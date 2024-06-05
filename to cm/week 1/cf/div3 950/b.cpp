#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n, f, k;
    cin>>n>>f>>k;
    priority_queue<int>pq;
    map<int,int>mp;
    int fav;
    for(int i = 0;i<n;i++){
        int x;cin>>x;
        if(!mp[x]){
            pq.push(x);
        }
        if(i+1==f){
            fav = x;
        }
        mp[x]++;    
    }
    int last = 0;
    while(!pq.empty() && k>0){
        if(last==fav){
            cout<<"YES"<<endl;
            return;
        }
        last = pq.top();
        k-=(mp[pq.top()]);
        if(k)
        pq.pop();
    }
    if(k==0 && last==fav){
        cout<<"YES"<<endl;
        return;
    }else if(k<0 && last==fav){
        cout<<"MAYBE"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}