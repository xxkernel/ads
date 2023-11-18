#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    priority_queue<int>pq;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        pq.push(num);
    }
    long sum = 0;
    while(m--){
        int x = pq.top();
        sum+=x;
        pq.pop();
        if(x==1){
            continue;
        }
        else{
            pq.push(x-1);
        }
    }
    cout<<sum;
}