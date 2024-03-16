#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    while(n--){
        int m;cin>>m;
        priority_queue<int, vector<int>, greater<int>>pq1;
        priority_queue<int, vector<int>, greater<int>>pq2;
        for(int i = 0;i<m;i++){
            int num;cin>>num;
            pq1.push(num);
        }
        for(int i = 0;i<m;i++){
            int num;cin>>num;
            pq2.push(num);
        }
        bool isTrue = 0;
        while(pq1.size()!=0){
            if(pq1.top()==pq2.top()){
                pq1.pop();
                pq2.pop();
            }
            else if(pq2.top()%2==1){
                cout<<"NO"<<endl;
                isTrue = 1;
                break;
            }
            else if(pq2.top()<pq1.top()){
                int temp = pq1.top();
                pq1.pop();
                pq1.push(temp/2);
            }
            else if(pq2.top()>pq1.top()){
                int temp = pq1.top();
                pq1.pop();
                pq1.push(temp*2);
            }
        }
        if(isTrue==false){
            cout<<"YES"<<endl;
        }
    }
}