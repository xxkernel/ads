#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>>pq;
    pq.push(5);
    pq.push(4);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}