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
    priority_queue<int, vector<int>, greater<int>>pq;
    vector<int>temp;
    for(int i = 0;i<n;i++){
        if(i==0){
            if(i-v[i]){
                cout<<0<<" ";
                pq.push(0);
            }else{
                cout<<abs(v[i])<<" ";
                pq.push(abs(v[i]));
            }
        }
        else{
            pq.push(v[i]);
            int q = pq.top();
            pq.pop();
            if(q>0){
                cout<<v[i]<<" ";
            }else{
                
            }
            pq.push(v[i]);
        }
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