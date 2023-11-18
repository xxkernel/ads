#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    priority_queue<int>q;
    int n = 5;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        q.push(num);
    }
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
}