#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int cnt = 0;
    priority_queue<long, vector<long>, greater<long>>pq;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        pq.push(num);
    }
    while(pq.size()>1){
        if(pq.top()>=m){
            cout<<cnt;
            return 0;
        }
        int x = pq.top();
        pq.pop();
        int y = pq.top()*2+x;
        pq.pop();
        pq.push(y);
        cnt++;
    }
    if(pq.top()<m){
        cout<<-1;
    }
    else{
        cout<<cnt;
    }
}