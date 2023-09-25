#include<iostream>
#include<deque>
using namespace std;

int main(){
    int n;cin>>n;
    for(int i = 0;i<n;i++){
        deque<int>dq;
        int num;cin>>num;
        for(int j = num;j>0;j--){
            dq.push_front(j);
            for(int k = 1;k<=j;k++){
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
        for(int j = 0;j<dq.size();j++){
            cout<<dq[j]<<" ";
        }
        cout<<endl;
    }
    // 4
    // 34 43 34 43 
    // 243 324 432
    // 1432 2143
}