#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n, t;
    cin>>n>>t;
    priority_queue<double>pq;
    for(int i = 0;i<n;i++){
        int x, y;cin>>x>>y;
        for(int j = 0;j<y;j++){
            pq.push((double)x/y);
        }
    }
    long double sum = 0;
    while(!pq.empty() &&t--){
        sum+=pq.top();
        pq.pop();
    }
    cout<<sum;
}

int main(){
    go
    solve();
}