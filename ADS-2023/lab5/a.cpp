#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n;cin>>n;
    priority_queue<long, vector<long>, greater<long>> pq;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        pq.push(num);
    }
    long sum = 0;
    while(!pq.empty()){
        long temp = pq.top(); 
        pq.pop();
        if(pq.empty()){
            break;
        }
        else{
            temp+=pq.top(); 
            pq.pop();
            sum+=temp; 
            pq.push(temp);
        }
    }
    cout<<sum;
}