#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;
    map<int,int>mp;
    while(n--){
        int x;
        cin>>x;
        mp[x]++;
    }
    priority_queue<int>pq;
    for(auto x:mp){
        pq.push(x.second);
    }
    while(!pq.empty() && pq.top()>=k){
        int x = pq.top()%k;
        pq.pop();
        if(pq.empty()){
            break;
        }
        int y = pq.top();
        pq.pop();
        pq.push(y+(k-1));
        if(x!=0){
            pq.push(x);
        }
    }
    int sum = 0;
    while(!pq.empty()){
        sum+=pq.top();
        pq.pop();
    }
    cout<<sum<<endl;
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}