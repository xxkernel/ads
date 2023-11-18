#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    priority_queue<int>pq;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        pq.push(num);
    }
    while(!pq.empty()){
        if(n==1){
            break;
        }
        int y = pq.top();
        pq.pop();
        n--;
        int x = pq.top();
        pq.pop();
        n--;
        if(x==y){
            if(pq.empty()){
                cout<<0;
                return 0;
            }
            continue;
        }
        else{
            pq.push(y-x);
            n++;
        }
    }
    cout<<pq.top();
}