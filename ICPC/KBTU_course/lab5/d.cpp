#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    priority_queue<long long, vector<long long>, greater<long long>>pq;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        pq.push(num);
    }
    long long sum = 0;
    while(pq.size()>1){
        long long a = pq.top();
        pq.pop();
        long long b = pq.top();
        pq.pop();
        pq.push(a+b);
        sum+=(a+b);
    }
    cout<<sum;
}   

int main(){
    go
solve();
}